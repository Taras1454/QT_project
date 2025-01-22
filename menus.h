#ifndef MENUS_H
#define MENUS_H

#include <QMainWindow>

namespace Ui {
class Menus;
}

class Menus : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menus(QWidget *parent = nullptr);
    ~Menus();

private:
    Ui::Menus *ui;
};

#endif // MENUS_H
