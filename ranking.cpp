#include "ranking.h"
#include "ui_ranking.h"
#include"start.h"
#include <QList>
#include <QTreeWidgetItem>
#include <QTextStream>
#include <QStringList>
#include <QDebug>
#include "qmessagebox.h"
#include"player.h"
#include<qinputdialog.h>
Ranking::Ranking(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Ranking)
{
    ui->setupUi(this);
    //ui->ranktableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->ranktreeWidget->setStyleSheet("QTreeWidget::item { height: 40px; }");

    this->setWindowTitle("富豪玩家排行榜");
    Player player;
    if (!player.loadScoreFromFile(":/res/score.txt")) {
        qDebug() << "Failed to load items from file. Using default items.";
    }


    int rowCount = ui->ranktreeWidget->topLevelItemCount();  // 获取顶层项目数量

    for (int row = 0; row < rowCount; ++row) {
        QTreeWidgetItem* item = ui->ranktreeWidget->topLevelItem(row);  // 获取顶层项
        int colCount = item->columnCount();  // 获取每个条目的列数

        for (int col = 1; col < colCount; ++col) {  // 从第二列开始，保留第一列
            item->setText(col, "");  // 清空指定列的文本内容
        }
    }

    for (const auto& player : player.getAllElement()) {
        QString rankPerson = player.getPlayerName();
        long long ownMoney = player.getMoney()+player.getBankMoney();
        long long healthState=player.getHealth() ;
        long long fameState=player.getFame();
        // 创建 QTreeWidgetItem
        QTreeWidgetItem* treeItem = new QTreeWidgetItem();
        treeItem->setText(1, rankPerson);                  // 第一列：人名
        treeItem->setText(2, QString::number(ownMoney));// 第二列：金钱
        treeItem->setText(3, QString::number(healthState));//健康
        treeItem->setText(4, QString::number(fameState));//名声

        // 添加到 QTreeWidget
        ui->ranktreeWidget->addTopLevelItem(treeItem);
    }


}

Ranking::~Ranking()
{
    delete ui;
}







void Ranking::on_pushButton_clicked()
{
    this->close();
}

