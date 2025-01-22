#ifndef PRODUCTS_ADD_H
#define PRODUCTS_ADD_H

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
class products_Add;
}

class products_Add : public QMainWindow
{
    Q_OBJECT

public:
    explicit products_Add(QWidget *parent = nullptr);
    ~products_Add();

private slots:
    void on_pushData_clicked();

    void on_choseC_toggled(bool checked);
    void on_addC_toggled(bool checked);
    void on_sendC_clicked();
private:
    Ui::products_Add *ui;
    QSqlDatabase db;
    void loadCategories();
};

#endif // PRODUCTS_ADD_H
