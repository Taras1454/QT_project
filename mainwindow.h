#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "diagramwindow.h"




namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_sendDate_clicked();

    void closeEvent(QCloseEvent *event);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    DiagramWindow *window;




    enum State { EnterPH, EnterTemp, EnterLevel,Generate };
     State currentState;
     double PH;
     double temp;
     double level;
};

#endif // MAINWINDOW_H
