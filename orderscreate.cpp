#include "orderscreate.h"
#include "ui_orderscreate.h"

OrdersCreate::OrdersCreate(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OrdersCreate)
{
    ui->setupUi(this);
}

OrdersCreate::~OrdersCreate()
{
    delete ui;
}
