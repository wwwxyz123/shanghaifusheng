#include "buyconfirm.h"
#include "ui_buyconfirm.h"



//购买，且钱够买至少一个的框

buyconfirm::buyconfirm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::buyconfirm)
{
    ui->setupUi(this);
}

buyconfirm::~buyconfirm()
{
    delete ui;
}
