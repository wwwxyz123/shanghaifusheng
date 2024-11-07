#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListWidgetItem>
#include <QMessageBox>
#include"itemmanager.h"

#include <QDir>
#include <QCoreApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,player(new Player())

{
    ui->setupUi(this);
    ui->playermoney->setDigitCount(13);
    ui->playerbankmoney->setDigitCount(13);
    ui->playergiveupmoney->setDigitCount(13);

    ui->playermoney->setSegmentStyle(QLCDNumber::Flat);
    ui->playerbankmoney->setSegmentStyle(QLCDNumber::Flat);
    ui->playergiveupmoney->setSegmentStyle(QLCDNumber::Flat);
    ui->playerhealth->setSegmentStyle(QLCDNumber::Flat);
    ui->playerfame->setSegmentStyle(QLCDNumber::Flat);

    itemWidget = ui->itemWidget;
    buy = ui->buy;
    bagWidget = ui->bagWidget;
    sell=ui->sell;

    connect(player, &Player::moneyChanged, this, &MainWindow::updatePlayerUI);
    connect(player, &Player::bankMoneyChanged, this, &MainWindow::updatePlayerUI);
    connect(player, &Player::giveUpMoneyChanged, this, &MainWindow::updatePlayerUI);
    connect(player, &Player::healthChanged, this, &MainWindow::updatePlayerUI);
    connect(player, &Player::fameChanged, this, &MainWindow::updatePlayerUI);

    updatePlayerUI();

    // 加载物品列表
    loadItems();

    // 连接信号和槽
    connect(itemWidget, &QListWidget::itemClicked, this, &MainWindow::on_itemWidget_itemClicked);
    connect(buy, &QPushButton::clicked, this, &MainWindow::on_buy_clicked);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete player;
}

void MainWindow::updatePlayerUI()
{
    ui->playermoney->display(player->getMoney());
    ui->playerbankmoney->display(player->getBankMoney());
    ui->playergiveupmoney->display(player->getGiveUpMoney());
    ui->playerhealth->display(player->getHealth());
    ui->playerfame->display(player->getFame());
}

void MainWindow::on_playermoney_overflow()
{
    ui->playermoney->display(999999);
}


void MainWindow::on_pushButton_17_clicked()
{
    player->addMoney(1000000);
    updatePlayerUI();
}


void MainWindow::on_pushButton_18_clicked()
{
    player->reduceMoney(100);
    player->addGiveUpMoney(100);
    updatePlayerUI();
}

void MainWindow::loadItems() {
    if (itemmanagerusing.loadItemsFromFile(":/res/items.txt")) {
        for (const Item &item : itemmanagerusing.getAllItems()) {
            QListWidgetItem *listItem = new QListWidgetItem(QString::fromStdString(item.getName()), itemWidget);
            listItem->setData(Qt::UserRole, QVariant::fromValue(const_cast<Item*>(&item))); // 将物品对象存储到 item 中
        }
    } else {
        QMessageBox::warning(this, "加载失败", "无法加载物品数据。");
    }
}

void MainWindow::on_buy_clicked() {
    QListWidgetItem *selectedItem = itemWidget->currentItem();
    if (selectedItem) {
        // 获取选中的物品
        Item *item = selectedItem->data(Qt::UserRole).value<Item*>();

        if (item) {
            // 检查玩家是否有足够的钱
            if (player->getMoney() >= itemmanagerusing.generateRandomPrice(*item)) { // 使用生成的随机价格
                // 生成随机价格
                long long price = itemmanagerusing.generateRandomPrice(*item);

                // 扣除玩家的钱
                player->reduceMoney(price);

                // 将物品添加到背包列表中
                bagWidget->addItem(QString("%1 (Price: %2)").arg(QString::fromStdString(item->getName())).arg(price));

                QMessageBox::information(this, "买入成功", QString("您已买入 %1，花费 %2 金币。").arg(QString::fromStdString(item->getName())).arg(price));
            } else {
                QMessageBox::warning(this, "资金不足", "您没有足够的资金购买此物品。");
            }
        }
    } else {
        QMessageBox::warning(this, "未选择物品", "请先选择一个物品。");
    }
}


void MainWindow::on_sell_clicked()
{

}

void MainWindow::on_itemWidget_itemClicked(QListWidgetItem *item)
{
    // 设置所有条目为默认颜色
    for (int i = 0; i < itemWidget->count(); ++i) {
        itemWidget->item(i)->setBackground(Qt::NoBrush);
    }
    // 设置选中的条目为蓝色
    item->setBackground(Qt::blue);
}
