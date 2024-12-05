#include "settlement.h"
#include "ui_settlement.h"

settlement::settlement(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::settlement)
{
    ui->setupUi(this);
}

settlement::~settlement()
{
    delete ui;
}
