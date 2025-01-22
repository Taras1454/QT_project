#include "graphic.h"
#include "ui_graphic.h"
#include <QDebug>

graphic::graphic(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::graphic),
    window(nullptr)
{
    ui->setupUi(this);
    currentState = enterSize;
}

graphic::~graphic()
{
    delete ui;
    delete window;
}

void graphic::on_sendDate_clicked()
{
    QString text = ui->getDate->text();
    ui->getDate->clear();

    if (currentState == enterSize) {
        if (text.isEmpty()) {
            ui->statusbar->showMessage("Введіть значення!!!");
        } else {
            bool checkDate;
            int inputSize = text.toInt(&checkDate);
            if (checkDate && inputSize > 0 && inputSize <= 24) {  // Перевірка на діапазон тільки тут
                ui->statusbar->showMessage(text);
                size = inputSize;
                currentState = enterHours;
                ui->label->setText("Введіть годину годувань");
                ui->sendDate->setText("Далі");
            } else {
                ui->statusbar->showMessage("Некоректна кількість годувань (1-24)");
            }
        }
    }
    else if (currentState == enterHours) {
        if (text.isEmpty()) {
            ui->statusbar->showMessage("Введіть значення!!!");
        } else {
            bool checkDate;
            int hour = text.toInt(&checkDate);
            if (checkDate && hour >= 1 && hour <= 24) {
                if (!hours.contains(hour)) {
                    hours.push_back(hour);
                    ui->statusbar->showMessage("Година додана: " + QString::number(hour));

                    if (hours.size() < size) {
                        ui->label->setText("Введіть наступну годину");
                    } else {
                        ui->statusbar->showMessage("Всі години введені!");
                        ui->sendDate->setGeometry(ui->sendDate->pos().x()-20,ui->sendDate->pos().y(),ui->sendDate->size().width()+40,ui->sendDate->size().height());


                        ui->sendDate->setText("Згенерувати графік годування");
                        ui->getDate->setEnabled(false);
                        currentState = GenerateGraph;

                        for (int i = 0; i < hours.size(); ++i) {
                            qDebug() << "Година годування:" << hours[i];
                        }
                    }
                } else {
                    ui->statusbar->showMessage("Година " + QString::number(hour) + " вже введена!");
                }
            } else {
                ui->statusbar->showMessage("Некоректні дані для години (1-24)");
            }
        }
    }
    else if (currentState == GenerateGraph) {
        window = new graphicView();
        window->setHours(hours);
        window->show();
        this->close();
    }
}
void graphic::closeEvent(QCloseEvent *event)
{
    parentWidget()->show();
    this->close();

}

void graphic::on_pushButton_clicked()
{
    parentWidget()->show();
    this->close();
}
