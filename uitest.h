#ifndef UITEST_H
#define UITEST_H

#include <QWidget>
#include <QTreeWidgetItem>
#include "player.h"
namespace Ui {
class uitest;
}

class uitest : public QWidget
{
    Q_OBJECT

public:
    explicit uitest(QWidget *parent = nullptr);
    ~uitest();

private slots:
    void on_testitemWidget_itemClicked(QTreeWidgetItem *item, int column);
    void addItemToBag(QString itemName,long long nowPrice,int quantity);
    void on_buy_clicked();

    void on_sell_clicked();

private:
    Ui::uitest *ui;
    Player *player=new Player();
};

#endif // UITEST_H
