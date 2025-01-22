#ifndef PRODUCTS_H
#define PRODUCTS_H

#include <QMainWindow>


#include <QTableView>
#include <QSqlTableModel>
#include <products_add.h>

namespace Ui {
class Products;
}

class Products : public QMainWindow
{
    Q_OBJECT

public:
    explicit Products(QWidget *parent = nullptr);
    ~Products();

private slots:
    void on_add_triggered();

    void on_update_triggered();

    void on_back_triggered();

private:
    Ui::Products *ui;
    QSqlTableModel *model;
    products_Add * window_add;
    void loadProducts();
};

#endif // PRODUCTS_H
