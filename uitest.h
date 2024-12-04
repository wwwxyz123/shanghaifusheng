#ifndef UITEST_H
#define UITEST_H

#include <QWidget>
#include<qlabel.h>
#include"mainwindow.h"
namespace Ui {
class uitest;
}

class uitest : public QWidget
{
    Q_OBJECT

public:
    explicit uitest(MainWindow *main,QWidget *parent = nullptr);
    ~uitest();
    void updateValue();

    void setupAnimation(QLabel* label, int& currentValue, int targetValue);
private slots:
    void on_pushButton_clicked();

    void on_torank_clicked();

    void on_newgame_clicked();

    void on_leave_clicked();

private:
    Ui::uitest *ui;
    MainWindow *mainwindow;

    long long currentValue;
    long long targetValue;
    long long stepValue;
};

#endif // UITEST_H
