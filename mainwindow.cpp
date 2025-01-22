#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "diagramwindow.h"
#include "graphic.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    currentState=EnterPH;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sendDate_clicked()
{
    QString text=ui->getDate->text();
    ui->getDate->clear();
    if(currentState==EnterPH){
    if(text.isEmpty()){
        ui->statusBar->showMessage("Введіть значення!!!");
    }
    else {
        bool checkDate;
        text.toDouble(&checkDate);
        if(checkDate){
        ui->statusBar->showMessage(text);
        PH=(text.toDouble());
        currentState=EnterTemp;
        ui->label->setText("Введіть температуру");
        }

        else ui->statusBar->showMessage("Некоректні дані");
    }
}
    else if(currentState==EnterTemp){

        if(text.isEmpty()){
            ui->statusBar->showMessage("Введіть значення!!!");
        }
        else {
            bool checkDate;
            text.toDouble(&checkDate);
            if(checkDate){
            ui->statusBar->showMessage(text);
            temp=(text.toDouble());
            currentState=EnterLevel;
            ui->label->setText("Введіть рівень води");
            }

            else ui->statusBar->showMessage("Некоректні дані");
        }
    }
    else if(currentState==EnterLevel){
        if(text.isEmpty()){
            ui->statusBar->showMessage("Введіть значення!!!");
        }
        else {
            bool checkDate;
            text.toDouble(&checkDate);
            if(checkDate){
            ui->statusBar->showMessage(text);
            level=(text.toDouble());
            ui->getDate->setEnabled(false);
            currentState=Generate;
            ui->sendDate->setText("Згенерувати діаграму");

            }

            else ui->statusBar->showMessage("Некоректні дані");
        }
    }
    else if(currentState==Generate){
    window = new DiagramWindow();
    window->SendData(PH,temp,level);
    window->show();
    this->close();






    ui->statusBar->showMessage("Є");


    }
    qDebug()<<PH<<" "<<temp<<" "<<level;
}



void MainWindow::on_pushButton_clicked()
{
    //parentWidget()->show();
    this->close();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    //parentWidget()->show();
    this->close();
}
