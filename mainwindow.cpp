#include "mainwindow.h"
#include "ui_mainwindow.h"

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

    connect(player, &Player::moneyChanged, this, &MainWindow::updatePlayerUI);
    connect(player, &Player::bankMoneyChanged, this, &MainWindow::updatePlayerUI);
    connect(player, &Player::giveUpMoneyChanged, this, &MainWindow::updatePlayerUI);
    connect(player, &Player::healthChanged, this, &MainWindow::updatePlayerUI);
    connect(player, &Player::fameChanged, this, &MainWindow::updatePlayerUI);

    updatePlayerUI();
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

