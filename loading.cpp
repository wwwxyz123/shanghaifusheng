#include "loading.h"
#include "ui_loading.h"
#include "player.h"
loading::loading(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::loading)
    , mainwindow(nullptr)

{
    ui->setupUi(this);
    // connect(ui->begin,&QPushButton::clicked,this,&loading::on_begin_clicked);
    //connect(ui->begin, &QPushButton::clicked, this, &Player::setPlayerName(name));
    // this->setMaximumSize(420,580);
    // this->setMinimumSize(420,580);
    this->setWindowTitle("背景故事");
    //Player *player = new Player();
}

loading::~loading()
{
    delete ui;
}

void loading::on_begin_clicked()
{
    QString playerName = ui->lineEdit->text();

    // 调用 Player 对象的 setPlayerName 方法，将获取到的名字设置到 Player 对象中
    player->setPlayerName(playerName);
    if(!mainwindow)
    {
        mainwindow=new MainWindow();
        mainwindow->show();
    }
    this->close();
}

