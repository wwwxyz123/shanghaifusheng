#ifndef BANK_H
#define BANK_H

#include <QWidget>
#include "player.h"

namespace Ui {
class Bank;
}

class Bank : public QWidget
{
    Q_OBJECT

public:
    explicit Bank(Player *player,QWidget *parent = nullptr);
    ~Bank();
    void setCash(long long,long long);
    void updateTipLabel();

private slots:
    void on_cancelButton_clicked();
    void on_saveButton_clicked();
    void on_drawButton_clicked();

    void on_leaveButton_clicked();

private:
    Ui::Bank *ui;
    long long myCash;
    long long mySavings;
    Player *player;

signals:
    void bankMoneyChanged(long long cash,long long savings);
};
#endif // BANK_H
