#include "start.h"
#include "ui_start.h"
#include"loading.h"
start::start(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::start)
    , loadingwindow(nullptr)
{
    ui->setupUi(this);
    connect(ui->startbutton,&QPushButton::clicked,this,&start::on_startbutton_clicked);
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

