#include "loading.h"
#include "ui_loading.h"
loading::loading(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::loading)
    , mainwindow(nullptr)
{
    ui->setupUi(this);
    connect(ui->begin,&QPushButton::clicked,this,&loading::on_begin_clicked);
}

loading::~loading()
{
    delete ui;
}

void loading::on_begin_clicked()
{
    if(!mainwindow)
    {
        mainwindow=new MainWindow();
        mainwindow->show();
    }
    this->close();
}

