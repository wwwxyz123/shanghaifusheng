#include "uitest.h"
#include "ui_uitest.h"
#include "itemmanager.h"
#include <QTreeWidgetItem>
#include <QDebug>
#include "qmessagebox.h"
#include"player.h"
#include<qinputdialog.h>
uitest::uitest(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::uitest)
{

    ui->setupUi(this);

    ui->playermoney->display(QString::number(player->getMoney()));
    ui->playerbankmoney->display(QString::number(player->getBankMoney()));
    ui->playergiveupmoney->display(QString::number(player->getGiveUpMoney()));
    ui->playerhealth->display(QString::number(player->getHealth()));
    ui->playerfame->display(QString::number(player->getFame()));

    ItemManager itemManager;

    if (!itemManager.loadItemsFromFile(":/res/items.txt")) {
        qDebug() << "Failed to load items from file. Using default items.";
    }

    ui->testitemWidget->clear();

    for (const auto& item : itemManager.getAllItems()) {
        QString itemName = QString::fromStdString(item.getName());
        long long nowPrice = item.generatePrice();

        // 创建 QTreeWidgetItem
        QTreeWidgetItem* treeItem = new QTreeWidgetItem();
        treeItem->setText(0, itemName);                  // 第一列：商品名
        treeItem->setText(1, QString::number(nowPrice));// 第二列：价格

        // 添加到 QTreeWidget
        ui->testitemWidget->addTopLevelItem(treeItem);
    }


}

uitest::~uitest()
{
    delete ui;
}

void uitest::on_testitemWidget_itemClicked(QTreeWidgetItem *item, int column)
{
    if(!item)return;

    QString nowName=item->text(0);
    QString nowPrice=item->text(1);

    qDebug() << "Selected Item:";
    qDebug() << "Name:" << nowName;
    qDebug() << "Price:" << nowPrice;
}

void uitest::addItemToBag(QString itemName,long long nowPrice,int quantity)
{
    QTreeWidgetItem* bagItem = new QTreeWidgetItem();

    bagItem->setText(0, itemName);

    bagItem->setText(1, QString::number(nowPrice));

    bagItem->setText(2, QString::number(quantity));

    ui->bagWidget->addTopLevelItem(bagItem);
}
void uitest::on_buy_clicked()
{
    QTreeWidgetItem *nowSelect=ui->testitemWidget->currentItem();
    if(!nowSelect){
        QMessageBox::warning(this,"警告","请选择一个物品");
        return;
    }
    QString nowName=nowSelect->text(0);
    long long nowPrice=nowSelect->text(1).toLongLong();

    // 检查总金额是否足够购买 1 个商品
    if (player->getMoney() + player->getBankMoney() < nowPrice) {
        QMessageBox::warning(this, "错误", "没有足够的钱！");
        return;
    }

    // 如果银行里的钱足够购买
    if (player->getBankMoney() >= nowPrice) {
        QMessageBox::information(this, "提示", "银行里的钱足够购买，请去取钱！");
        return;
    }

    if(player->getBagSize()==0)
    {
        QMessageBox::information(this, "提示", "你没有足够的背包空间");
        return;
    }
    // 弹出输入框，默认值为最多可购买数量
    int maxQuantity = std::min(player->getMoney() / nowPrice,player->getBagSize()); // 玩家最多可买的数量
    bool ok;
    int quantity = QInputDialog::getInt(this, "购买商品",
                                        QString("请输入购买数量（最多 %1 个）：").arg(maxQuantity),
                                        maxQuantity, 1, maxQuantity, 1, &ok);

    if (!ok || quantity <= 0) {
        return; // 用户取消或输入无效
    }
    player->setBagSize(player->getBagSize()-quantity);
    // 更新到 bagwidget
    addItemToBag(nowName, nowPrice, quantity);

    // 扣除玩家的钱
    player->reduceMoney( nowPrice * quantity);

    ui->playermoney->display(QString::number(player->getMoney()));
    ui->playerbankmoney->display(QString::number(player->getBankMoney()));
    ui->playergiveupmoney->display(QString::number(player->getGiveUpMoney()));
    ui->playerhealth->display(QString::number(player->getHealth()));
    ui->playerfame->display(QString::number(player->getFame()));


    QMessageBox::information(this, "成功", QString("成功购买 %1 个 %2！").arg(quantity).arg(nowName));
}


void uitest::on_sell_clicked()
{
    // 获取当前选中的物品（bagWidget 中的物品）
    QTreeWidgetItem *selectedItem = ui->bagWidget->currentItem();
    if (!selectedItem) {
        QMessageBox::warning(this, "警告", "请选择一个物品！");
        return;
    }

    QString itemName = selectedItem->text(0);      // 商品名
    long long ownedPrice = selectedItem->text(1).toLongLong(); // 持有时价格
    int ownedQuantity = selectedItem->text(2).toInt();         // 持有数量

    // 弹出输入框，默认值为拥有的最大数量
    bool ok;
    int sellQuantity = QInputDialog::getInt(this, "卖出商品",
                                            QString("请输入卖出数量（最多 %1 个）：").arg(ownedQuantity),
                                            ownedQuantity, 1, ownedQuantity, 1, &ok);

    if (!ok) {
        return; // 用户取消操作
    }

    // 检查卖出数量是否合理
    if (sellQuantity <= 0) {
        QMessageBox::warning(this, "错误", "卖出数量不能为负数或零！");
        return;
    }

    if (sellQuantity > ownedQuantity) {
        QMessageBox::warning(this, "错误", "卖出的数量不能超过拥有的数量！");
        return;
    }

    // 检查 testitemWidget 是否有相应的收购物品
    QTreeWidgetItem *buyerItem = nullptr;
    for (int i = 0; i < ui->testitemWidget->topLevelItemCount(); ++i) {
        QTreeWidgetItem *item = ui->testitemWidget->topLevelItem(i);
        if (item->text(0) == itemName) {
            buyerItem = item;
            break;
        }
    }

    if (!buyerItem) {
        QMessageBox::warning(this, "提示", "暂时没有人收购呢！");
        return;
    }

    // 获取当前收购的价格
    long long sellPrice = buyerItem->text(1).toLongLong();

    // 增加玩家的钱
    player->addMoney(sellQuantity * sellPrice);
    player->setBagSize(player->getBagSize()+sellQuantity);
    // 更新拥有数量
    ownedQuantity -= sellQuantity;
    if (ownedQuantity > 0) {
        // 如果还有剩余，更新 bagWidget 中的数量
        selectedItem->setText(2, QString::number(ownedQuantity));
    } else {
        // 如果卖光了，删除该行
        delete selectedItem;
    }

    // 更新玩家的 UI
    ui->playermoney->display(QString::number(player->getMoney()));

    QMessageBox::information(this, "成功",
                             QString("成功卖出 %1 个 %2，获得 %3 金币！").arg(sellQuantity).arg(itemName).arg(sellQuantity * sellPrice));
}

