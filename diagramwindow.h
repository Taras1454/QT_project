#ifndef DIAGRAMWINDOW_H
#define DIAGRAMWINDOW_H

#include <QWidget>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>


namespace Ui {
class DiagramWindow;
}

class Menu;

class DiagramWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DiagramWindow(QWidget *parent = nullptr);
    ~DiagramWindow();

public slots:
    void SendData(double PH,double temp,double level);
    void paintEvent(QPaintEvent *event);

private slots:
    void setChartData(QVector<double> &values,QVector<double> &idealValues);


    void closeEvent(QCloseEvent *event);

private:
    Ui::DiagramWindow *ui;
    QVector <double> userValues;
    QVector <double> idealValues{7.5,25,80};

signals:



};

#endif // DIAGRAMWINDOW_H
