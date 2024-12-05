#include "rent.h"
#include "ui_rent.h"
#include "player.h"
#include <QMessageBox>
#include <QDebug>
using namespace std;

Rent::Rent(Player *player,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Rent)
    ,player(player)
{
    ui->setupUi(this);
    setWindowTitle("租房中心");
}

Rent::~Rent()
{
    delete ui;
}

void Rent::on_leaveButton_clicked()
{
    QMessageBox::warning(this,"中介说","侬当这菜市场了噻？");
    this->close();
}


void Rent::on_oneButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(nullptr, "收银说", "您确定要购买这个套餐吗?",QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        player->setMaxBagSize(player->getMaxBagSize()+10);
        player->setBagSize(player->getBagSize()+10);
        player->reduceMoney(player->getMoney()*0.1);
        emit bagMaxSizeChanged();
        this->close();
    }
    else
        this->close();
}


void Rent::on_twoButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(nullptr, "收银说", "您确定要购买这个套餐吗?",QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        player->setMaxBagSize(player->getMaxBagSize()+20);
        player->setBagSize(player->getBagSize()+20);
        player->reduceMoney(player->getMoney()*0.15);
        emit bagMaxSizeChanged();
        this->close();
    }
    else
        this->close();
}


void Rent::on_threeButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(nullptr, "收银说", "您确定要购买这个套餐吗?",QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        player->setMaxBagSize(player->getMaxBagSize()+30);
        player->setBagSize(player->getBagSize()+30);
        player->reduceMoney(player->getMoney()*0.2);
        emit bagMaxSizeChanged();
        this->close();
    }
    else
        this->close();
}


void Rent::on_fourButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(nullptr, "收银说", "您确定要购买这个套餐吗?",QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        player->setMaxBagSize(player->getMaxBagSize()+50);
        player->setBagSize(player->getBagSize()+50);
        player->reduceMoney(player->getMoney()*0.3);
        emit bagMaxSizeChanged();
        this->close();
    }
    else
        this->close();
}


void Rent::on_fiveButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(nullptr, "收银说", "您确定要购买这个套餐吗?",QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        player->setMaxBagSize(player->getMaxBagSize()+80);
        player->setBagSize(player->getBagSize()+80);
        player->reduceMoney(player->getMoney()*0.5);
        emit bagMaxSizeChanged();
        this->close();
    }
    else
        this->close();
}

