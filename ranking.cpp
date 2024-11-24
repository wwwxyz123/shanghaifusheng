#include "ranking.h"
#include "ui_ranking.h"
#include"start.h"
Ranking::Ranking(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Ranking)
    ,startingwindow(nullptr)
{
    ui->setupUi(this);
    this->setWindowTitle("排行榜");
    connect(ui->backButton,&QPushButton::clicked,this,&Ranking::on_backButton_clicked);

}

Ranking::~Ranking()
{
    delete ui;
}

void Ranking::on_backButton_clicked()
{
    if(!startingwindow)
    {
        startingwindow=new start();
        startingwindow->show();
    }
    this->close();
}

