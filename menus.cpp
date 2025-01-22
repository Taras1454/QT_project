#include "menus.h"
#include "ui_menus.h"

Menus::Menus(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menus)
{
    ui->setupUi(this);
}

Menus::~Menus()
{
    delete ui;
}
