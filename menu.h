#ifndef MENU_H
#define MENU_H


//#include "moc_menu.cpp"



#include <QMainWindow>
#include <mainwindow.h>
#include <graphic.h>


#include <diagramwindow.h>

#include <products.h>



namespace Ui {

class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private:
    Ui::Menu *ui;
    MainWindow *window_d;
    graphic *window_g;
    Products *window_p;

signals:
    void backToAuthorization();

public slots:
    void slot(QString nick);
    void closeEvent(QCloseEvent *event);




private slots:
    void on_diagram_triggered();
    void on_graph_triggered();
    void on_exit_triggered();
    void on_table_triggered();

    void on_back_triggered();
};

#endif // MENU_H
