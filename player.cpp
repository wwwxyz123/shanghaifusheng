#include "player.h"
#include <iostream>

Player::Player()
    : money(114514), bankMoney(0), giveUpMoney(1919), health(100), fame(100) {}

int Player::getMoney() const { return money.get(); }
void Player::addMoney(int num)
{
    money.add(num);
    emit moneyChanged(money.get());
}
void Player::reduceMoney(int num)
{
    money.reduce(num);
    emit moneyChanged(money.get());
}

int Player::getBankMoney() const { return bankMoney.get(); }
void Player::addBankMoney(int num)
{
    bankMoney.add(num);
    emit bankMoneyChanged(bankMoney.get());
}
void Player::reduceBankMoney(int num)
{
    bankMoney.reduce(num);
    emit bankMoneyChanged(bankMoney.get());
}

int Player::getGiveUpMoney() const { return giveUpMoney.get(); }
void Player::addGiveUpMoney(int num)
{
    giveUpMoney.add(num);
    emit giveUpMoneyChanged(giveUpMoney.get());
}
void Player::reduceGiveUpMoney(int num)
{
    giveUpMoney.reduce(num);
    emit giveUpMoneyChanged(giveUpMoney.get());
}

int Player::getHealth() const { return health.get(); }
void Player::addHealth(int num)
{
    health.add(num);
    emit healthChanged(health.get());
}
void Player::reduceHealth(int num)
{
    health.reduce(num);
    emit healthChanged(health.get());
}

int Player::getFame() const { return fame.get(); }
void Player::addFame(int num)
{
    fame.add(num);
    emit fameChanged(fame.get());
}
void Player::reduceFame(int num)
{
    fame.reduce(num);
    emit fameChanged(fame.get());
}
