#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

class Player : public QObject {
    Q_OBJECT
public:
    Player();

    long long getMoney() const;
    void addMoney(long long amount);
    void reduceMoney(long long amount);

    long long getBankMoney() const;
    void addBankMoney(long long amount);
    void reduceBankMoney(long long amount);

    long long getGiveUpMoney() const;
    void addGiveUpMoney(long long amount);
    void reduceGiveUpMoney(long long amount);

    long long getHealth() const;
    void addHealth(long long amount);
    void reduceHealth(long long amount);

    long long getFame() const;
    void addFame(long long amount);
    void reduceFame(long long amount);

    long long getBagSize() const;
    void setBagSize(long long size);

    QString getPlayerName() const;  // 获取玩家名字
    void setPlayerName(const QString &name);  // 设置玩家名字

    bool loadScoreFromFile(const QString& filename);
    // 获取所有物品
    const std::vector<Player>& getAllElement() const;

signals:
    void moneyChanged(long long newMoney);
    void bankMoneyChanged(long long newBankMoney);
    void giveUpMoneyChanged(long long newGiveUpMoney);
    void healthChanged(long long newHealth);
    void fameChanged(long long newFame);

private:
    std::vector<Player> players;
    long long money;
    long long bankMoney;
    long long giveUpMoney;
    long long health;
    long long fame;
    long long bagsize;

    QString playerName;
};

#endif // PLAYER_H
