#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListWidgetItem>
#include <QMessageBox>
#include"itemmanager.h"

#include <QDir>
#include <QCoreApplication>
#include <QDebug>
#include <QThread>
// #include <QStackTrace>


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

    loadItems();

    // // connect(itemWidget, &QListWidget::itemClicked, this, &MainWindow::on_itemWidget_itemClicked);
    // bool result = connect(buy, &QPushButton::clicked, this, &MainWindow::on_buy_clicked);
    // qDebug() << "Connection result:" << result;
    // // connect(buy, &QPushButton::clicked, this, &MainWindow::on_buy_clicked, Qt::UniqueConnection);

//背包列宽设置
    bagWidget->header()->setSectionResizeMode(QHeaderView::Stretch); // 所有列拉伸
    bagWidget->header()->resizeSection(0, 3); // 第1列权重为2
    bagWidget->header()->resizeSection(1, 3); // 第2列权重为3
    bagWidget->header()->resizeSection(2, 3);

//商品栏列宽设置
    itemWidget->header()->setSectionResizeMode(QHeaderView::Stretch); // 所有列拉伸
    itemWidget->header()->resizeSection(0, 5); // 第1列权重为2
    itemWidget->header()->resizeSection(1, 5); // 第2列权重为3

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

}

void MainWindow::on_buy_clicked()
{

}

void MainWindow::on_sell_clicked()
{

}

// void MainWindow::on_itemWidget_itemClicked(QListWidgetItem *item)
// {
//     // 设置所有条目为默认颜色
//     for (int i = 0; i < itemWidget->count(); ++i) {
//         itemWidget->item(i)->setBackground(Qt::NoBrush);
//     }
//     // 设置选中的条目为蓝色
//     item->setBackground(Qt::blue);
// }



