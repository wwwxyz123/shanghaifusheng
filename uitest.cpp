#include "uitest.h"
#include "ui_uitest.h"
#include <QTimer>


uitest::uitest(MainWindow *main,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::uitest)
    ,mainwindow(main)
{
    ui->setupUi(this);

    currentValue = 0;  // 初始化当前值为0
    Player *p=mainwindow->getPlayer();
    targetValue = p->getMoney()+p->getBankMoney()-p->getGiveUpMoney();

    // 设置数字显示框
    ui->money->setText(QString::number(currentValue));

    // 计算更新的步长和定时器间隔
    int totalDuration = 1000; // 3秒
    int interval = 11; // 定时器触发间隔，单位毫秒
    int steps = totalDuration / interval; // 计算定时器触发次数
    int stepValue = targetValue / steps; // 每次增加的值

    // 创建定时器
    QTimer* timer = new QTimer(this);

    // 每隔一定时间触发一次
    connect(timer, &QTimer::timeout, this, &uitest::updateValue);
    timer->start(interval);

    this->stepValue = stepValue;
}

void uitest::updateValue()
{
    if (currentValue < targetValue) {
        currentValue += stepValue;  // 每次增加步长
        if (currentValue > targetValue) {
            currentValue = targetValue;  // 防止超过目标值
        }
        ui->money->setText(QString::number(long(currentValue)) + "元"); // 更新UI显示
    }
}

uitest::~uitest()
{
    delete ui;
}



void uitest::on_torank_clicked()
{

}


void uitest::on_newgame_clicked()
{
    this->close();
    mainwindow->close();
    MainWindow *m=new MainWindow;
    m->show();
}


void uitest::on_leave_clicked()
{
    this->close();
    mainwindow->close();
}


void uitest::on_pushButton_clicked()
{

}

