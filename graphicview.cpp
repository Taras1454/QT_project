#include "graphicview.h"
#include <QPainter>
#include <QTime>
#include <QMessageBox>
#include <QTimer>
#include <QDebug>
graphicView::graphicView(QWidget *parent)
    : QWidget(parent), timer(new QTimer(this))
{
    int squareSize = 30;
    int spacing = 5;
    int rows = 2;
    int cols = 12;


    int titleHeight = 40;


    int width = cols * (squareSize + spacing) - spacing;
    int height = rows * (squareSize + spacing) - spacing + titleHeight;
    setFixedSize(width, height);


    connect(timer, &QTimer::timeout, this, &graphicView::checkFeedingTime);
    timer->start(60000);
}

void graphicView::setHours(const QVector<int> &hours) {
    this->hours = hours;
    update();
}

void graphicView::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    int squareSize = 30;
    int spacing = 5;
    int titleHeight = 40;


    painter.setPen(Qt::black);
    QFont font = painter.font();
    font.setPointSize(14);
    font.setBold(true);
    painter.setFont(font);
    painter.drawText(rect(), Qt::AlignHCenter | Qt::AlignTop, "Графік годування");


    for (int hour = 1; hour <= 24; ++hour) {
        int row = (hour - 1) / 12;
        int col = (hour - 1) % 12;
        int x = col * (squareSize + spacing);
        int y = titleHeight + row * (squareSize + spacing);

        if (hours.contains(hour)) {
            painter.setBrush(QColor(173, 216, 230));
        } else {
            painter.setBrush(Qt::lightGray);
        }

        painter.drawRect(x, y, squareSize, squareSize);


        painter.setPen(Qt::black);
        QFont hourFont = painter.font();
        hourFont.setPointSize(10);
        painter.setFont(hourFont);

        painter.drawText(x + squareSize / 4, y + squareSize / 1.5, QString::number(hour));
    }
}

void graphicView::checkFeedingTime() {

    int currentHour = QTime::currentTime().hour();



    if (hours.contains(currentHour) && !notifiedHours.contains(currentHour)) {

        QMessageBox::information(this, "Година годування", "Час годування риби!", QMessageBox::Ok);


        notifiedHours.insert(currentHour);
    }


    if (currentHour > 24) {
        notifiedHours.clear();
    }
}


