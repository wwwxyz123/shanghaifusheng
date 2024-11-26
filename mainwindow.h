#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<qtreewidget.h>
#include<qpushbutton.h>
#include"player.h"
#include"itemmanager.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updatePlayerUI();
    void on_playermoney_overflow();
    void on_pushButton_17_clicked();
    void on_pushButton_18_clicked();
    void on_buy_clicked();
    void on_sell_clicked();
    // void on_itemWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    Player *player;
    QTreeWidget *itemWidget;
    QTreeWidget *bagWidget;
    QPushButton *buy;
    QPushButton *sell;
    ItemManager itemmanagerusing;
    void loadItems();                  // 加载物品列表到界面
};
#endif // MAINWINDOW_H
