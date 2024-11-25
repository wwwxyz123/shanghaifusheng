#include "buylose.h"
#include "ui_buylose.h"
//有两种，一种是银行钱够买至少一个，显示去银行取钱
//另一种是两个地方的钱都不够，显示离开
buylose::buylose(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::buylose)
{
    ui->setupUi(this);
}

buylose::~buylose()
{
    delete ui;
}
