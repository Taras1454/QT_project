#include "filtersproducts.h"
#include "ui_filtersproducts.h"

FiltersProducts::FiltersProducts(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FiltersProducts)
{
    ui->setupUi(this);
}

FiltersProducts::~FiltersProducts()
{
    delete ui;
}
