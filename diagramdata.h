#ifndef DIAGRAMDATA_H
#define DIAGRAMDATA_H

#include <QMainWindow>

namespace Ui {
class DiagramData;
}

class DiagramData : public QMainWindow
{
    Q_OBJECT

public:
    explicit DiagramData(QWidget *parent = nullptr);
    ~DiagramData();

private:
    Ui::DiagramData *ui;
};

#endif // DIAGRAMDATA_H
