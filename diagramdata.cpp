#include "diagramdata.h"
#include "ui_diagramdata.h"

DiagramData::DiagramData(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DiagramData)
{
    ui->setupUi(this);
}

DiagramData::~DiagramData()
{
    delete ui;
}
