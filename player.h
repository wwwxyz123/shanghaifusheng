#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

template<typename T>
class playertemplate {
public:
    playertemplate(T value) : value(value) {}

    T get() const { return value; }

    void add(T num) { value += num; }

    void reduce(T num) { value -= num; }

private:
    T value;
};

class Player : public QObject {
    Q_OBJECT
public:
    Player();

    int getMoney() const;
    void addMoney(int amount);
    void reduceMoney(int amount);

    int getBankMoney() const;
    void addBankMoney(int amount);
    void reduceBankMoney(int amount);

    int getGiveUpMoney() const;
    void addGiveUpMoney(int amount);
    void reduceGiveUpMoney(int amount);

    int getHealth() const;
    void addHealth(int amount);
    void reduceHealth(int amount);

    int getFame() const;
    void addFame(int amount);
    void reduceFame(int amount);

signals:
    void moneyChanged(int newMoney);
    void bankMoneyChanged(int newBankMoney);
    void giveUpMoneyChanged(int newGiveUpMoney);
    void healthChanged(int newHealth);
    void fameChanged(int newFame);

private:
    playertemplate<int> money;
    playertemplate<int> bankMoney;
    playertemplate<int> giveUpMoney;
    playertemplate<int> health;
    playertemplate<int> fame;
};

#endif // PLAYER_H
