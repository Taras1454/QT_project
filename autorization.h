#ifndef AUTORIZATION_H
#define AUTORIZATION_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>

#include <menu.h>


namespace Ui {
class Autorization;
}

class Autorization : public QMainWindow
{
    Q_OBJECT

public:
    explicit Autorization(QMainWindow *parent = nullptr);
    ~Autorization();

private slots:
    void on_pushData_clicked();

private:
    Ui::Autorization *ui;
    Menu *window;
    QSqlDatabase db;

signals:

    void signal(QString nick);
};

#endif // AUTORIZATION_H
