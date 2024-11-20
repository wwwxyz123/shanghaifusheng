#include "start.h"
#include "ui_start.h"
#include"loading.h"
#include"connectus.h"
start::start(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::start)
{
    ui->setupUi(this);
    connect(ui->startbutton,&QPushButton::clicked,this,&start::on_startbutton_clicked);
    connect(ui->connectusbutton,&QPushButton::clicked,this,&start::on_connectusbutton_clicked);
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


void start::on_connectusbutton_clicked()
{
    if(!connectUsWindow)
    {
        connectUsWindow=new connectUs();
        connectUsWindow->show();
    }
    this->close();
}

