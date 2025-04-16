#ifndef ORDERSCREATE_H
#define ORDERSCREATE_H

#include <QMainWindow>

namespace Ui {
class OrdersCreate;
}

class OrdersCreate : public QMainWindow
{
    Q_OBJECT

public:
    explicit OrdersCreate(QWidget *parent = nullptr);
    ~OrdersCreate();

private:
    Ui::OrdersCreate *ui;
};

#endif // ORDERSCREATE_H
