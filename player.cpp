#include "player.h"
#include <iostream>
#include<QDebug>
#include <QFile>
#include <QTextStream>
Player::Player()
    : money(10000), bankMoney(0), giveUpMoney(5000), health(100), fame(100) ,bagsize(100){}

long long Player::getMoney() const { return money; }
void Player::addMoney(long long num)
{
    money+=(num);
    emit moneyChanged(money);
}
void Player::reduceMoney(long long num)
{
    money-=(num);
    emit moneyChanged(money);
}

long long Player::getBankMoney() const { return bankMoney; }
void Player::addBankMoney(long long num)
{
    bankMoney+=(num);
    emit bankMoneyChanged(bankMoney);
}
void Player::reduceBankMoney(long long num)
{
    bankMoney-=(num);
    emit bankMoneyChanged(bankMoney);
}

long long Player::getGiveUpMoney() const { return giveUpMoney; }
void Player::addGiveUpMoney(long long num)
{
    giveUpMoney+=(num);
    emit giveUpMoneyChanged(giveUpMoney);
}
void Player::reduceGiveUpMoney(long long num)
{
    giveUpMoney-=(num);
    emit giveUpMoneyChanged(giveUpMoney);
}

long long Player::getHealth() const { return health; }
void Player::addHealth(long long num)
{
    health+=(num);
    emit healthChanged(health);
}
void Player::reduceHealth(long long num)
{
    health-=(num);
    emit healthChanged(health);
}

long long Player::getFame() const { return fame; }
void Player::addFame(long long num)
{
    fame+=(num);
    emit fameChanged(fame);
}
void Player::reduceFame(long long num)
{
    fame-=(num);
    emit fameChanged(fame);
}

long long Player::getBagSize() const {
    return bagsize;
}

void Player::setBagSize(long long size) {
    bagsize = size;
}

QString Player::getPlayerName() const {
    return playerName;
}

void Player::setPlayerName(const QString &name) {
    playerName = name;
    qDebug()<<"ok";
    //emit playerNameChanged(playerName);  // 你可以定义一个 playerNameChanged 信号
}

bool Player::loadScoreFromFile(const QString& filename){
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        std::cerr << "无法打开文件: " << filename.toStdString() << std::endl;
        return false;
    }
}
const std::vector<Player>& Player::getAllElement() const {
    return players;
}
