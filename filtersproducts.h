#ifndef FILTERSPRODUCTS_H
#define FILTERSPRODUCTS_H

#include <QMainWindow>

namespace Ui {
class FiltersProducts;
}

class FiltersProducts : public QMainWindow
{
    Q_OBJECT

public:
    explicit FiltersProducts(QWidget *parent = nullptr);
    ~FiltersProducts();

private:
    Ui::FiltersProducts *ui;
};

#endif // FILTERSPRODUCTS_H
