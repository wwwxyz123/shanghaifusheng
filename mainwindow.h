#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include"player.h"
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

private:
    Ui::MainWindow *ui;
    Player *player;
};
#endif // MAINWINDOW_H
