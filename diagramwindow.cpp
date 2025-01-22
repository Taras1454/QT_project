#include "diagramwindow.h"
#include "ui_diagramwindow.h"
#include <QDebug>
#include <QPainter>
#include <QPaintEvent>
#include <algorithm>
#include <QMessageBox>

DiagramWindow::DiagramWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DiagramWindow)
{
    ui->setupUi(this);

}

DiagramWindow::~DiagramWindow()
{
    delete ui;
}

void DiagramWindow::SendData(double PH,double temp,double level){
    userValues.push_back(PH);
    userValues.push_back(temp);
    userValues.push_back(level);
    setChartData(userValues,idealValues);
    if(userValues[0]<=2) QMessageBox::warning(this,"Увага","Рівень PH критично низький");
    if(userValues[0]>=10) QMessageBox::warning(this,"Увага","Рівень PH критично високий");

    if(userValues[1]<=15) QMessageBox::warning(this,"Увага","Температура води критично низька");
    if(userValues[1]>=40) QMessageBox::warning(this,"Увага","Температура води критично висока");

    if(userValues[2]<=60) QMessageBox::warning(this,"Увага","Рівень води занизький");
    if(userValues[2]>=100) QMessageBox::warning(this,"Увага","Рівень води зависокий");
}

void DiagramWindow::setChartData(QVector<double> &values,QVector<double> &idealValues){
    if (values.size() != idealValues.size()) {
           qWarning() << "Розмір масивів values і idealValues повинен збігатися!";
           return;
       }

       this->userValues = values;
       this->idealValues = idealValues;
       update();
}

void DiagramWindow::paintEvent(QPaintEvent *event)
{
    if (userValues.isEmpty() || idealValues.isEmpty()) {
        qWarning() <<"Немає даних";
        return;

    }

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    int numParameters = userValues.size();
    int sectionWidth = width() / numParameters;
    int maxBarHeight = height() * 0.6;


    double maxValue = std::max(*std::max_element(userValues.begin(), userValues.end()),
                               *std::max_element(idealValues.begin(), idealValues.end()));


    QStringList labels = {"PH", "Температура", "Рівень води"};


    while (labels.size() < numParameters) {
        labels.append("Параметр " + QString::number(labels.size() + 1));
    }

    for (int i = 0; i < numParameters; ++i) {
        int x = i * sectionWidth + sectionWidth / 2;

        int userBarHeight = 0;
        if (i == 0) {
            userBarHeight = static_cast<int>((userValues[i] / idealValues[i]) * 150);
        } else if (i == 1) {
            userBarHeight = static_cast<int>((userValues[i] / idealValues[i]) * 150);
        } else {
            userBarHeight = static_cast<int>((userValues[i] / idealValues[i]) * 150);
        }

        int idealBarHeight = 150;
        userBarHeight = std::min(userBarHeight, maxBarHeight);


        painter.setBrush(QColor(255, 105, 97));
        painter.drawRect(x - sectionWidth / 4, height() - userBarHeight, sectionWidth / 4, userBarHeight);

        painter.setBrush(QColor(100, 149, 237, 150));
        painter.drawRect(x, height() - idealBarHeight, sectionWidth / 4, idealBarHeight);

        painter.setPen(Qt::black);
        painter.drawText(x - sectionWidth / 4, height() - userBarHeight - 10, QString::number(userValues[i], 'f', 1));
        painter.drawText(x + sectionWidth / 4+2, height() - idealBarHeight - 10, QString::number(idealValues[i], 'f', 1));
        painter.drawText(x - sectionWidth / 4, height() - maxBarHeight - 30, labels[i]);
        painter.drawText(x + sectionWidth / 4+2, height() - idealBarHeight +2,"Ідеал");
    }
}

void DiagramWindow::closeEvent(QCloseEvent *event)
{
    this->close();
    event->accept();
   // parentWidget()->show();

}



