#include "start.h"
#include "ui_start.h"
#include"loading.h"
#include"ranking.h"
start::start(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::start)
    , loadingwindow(nullptr)
    , rankingwindow(nullptr)
{
    ui->setupUi(this);
    this->setWindowTitle("上海浮生记");
    connect(ui->startbutton,&QPushButton::clicked,this,&start::on_startbutton_clicked);
    connect(ui->rankbutton,&QPushButton::clicked,this,&start::on_rankbutton_clicked);
    //rankingwindow = new Ranking(this);
}

start::~start()
{
    delete ui;
}

void start::on_startbutton_clicked()
{
    if(!loadingwindow)
    {
        loadingwindow=new loading();
        loadingwindow->show();
    }
    this->close();
}


void start::on_rankbutton_clicked()
{
    if(!rankingwindow)
    {
        rankingwindow=new Ranking();
        rankingwindow->show();
    }
    this->close();
}

