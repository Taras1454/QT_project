#include "autorization.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Autorization w;
    w.show();

    return a.exec();
}
