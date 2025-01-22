#ifndef GRAPHIC_H
#define GRAPHIC_H

#include <QMainWindow>
#include <QVector>
#include "graphicview.h"
namespace Ui {
class graphic;
}

class graphic : public QMainWindow
{
    Q_OBJECT

public:
    explicit graphic(QWidget *parent = nullptr);
    ~graphic();

private slots:
    void on_sendDate_clicked();
    void closeEvent(QCloseEvent *event);
    void on_pushButton_clicked();

private:
    Ui::graphic *ui;
    QVector<int> hours;
    int size;
    enum State { enterSize, enterHours, GenerateGraph } currentState;
    graphicView *window;
};

#endif // GRAPHIC_H
