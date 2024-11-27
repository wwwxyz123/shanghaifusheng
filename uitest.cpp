#include "uitest.h"
#include "ui_uitest.h"
#include "itemmanager.h"
#include <QTreeWidgetItem>
#include <QDebug>

uitest::uitest(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::uitest)
{
    ui->setupUi(this);

    // Step 1: 创建 ItemManager 实例
    ItemManager itemManager;

    // Step 2: 从资源文件加载物品数据
    if (!itemManager.loadItemsFromFile(":/res/items.txt")) {
        qDebug() << "Failed to load items from file. Using default items.";
        // // 如果加载失败，手动添加一些示例物品

        Item newItem("新玩具", 500, 50);

        itemManager.addItem(newItem);
    }

    // Step 3: 清空 QTreeWidget
    ui->treeWidget->clear();

    // Step 4: 设置 QTreeWidget 列标题
    ui->treeWidget->setHeaderLabels({"商品名", "价格"});

    // Step 5: 获取所有物品并将其添加到 QTreeWidget
    for (const auto& item : itemManager.getAllItems()) {
        QString itemName = QString::fromStdString(item.getName());
        long long itemPrice = item.generatePrice();

        // 创建 QTreeWidgetItem
        QTreeWidgetItem* treeItem = new QTreeWidgetItem();
        treeItem->setText(0, itemName);                  // 第一列：商品名
        treeItem->setText(1, QString::number(itemPrice));// 第二列：价格

        // 添加到 QTreeWidget
        ui->treeWidget->addTopLevelItem(treeItem);
    }


}

uitest::~uitest()
{
    delete ui;
}
