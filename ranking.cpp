#include "ranking.h"
#include "ui_ranking.h"
#include"start.h"
Ranking::Ranking(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Ranking)
{
    ui->setupUi(this);
    //ui->ranktableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->ranktableWidget->setStyleSheet("QTreeWidget::item { height: 40px; }");

    this->setWindowTitle("富豪玩家排行榜");


}

Ranking::~Ranking()
{
    delete ui;
}

void Ranking::on_startButton_clicked()
{

    if(!startingwindow)
    {
        startingwindow=new start();
        startingwindow->show();
    }
    this->close();
}

