#include "uitest.h"
#include "ui_uitest.h"

uitest::uitest(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::uitest)
{
    ui->setupUi(this);
}

uitest::~uitest()
{
    delete ui;
}
