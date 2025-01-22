#ifndef GRAPHICVIEW_H
#define GRAPHICVIEW_H

#include <QWidget>
#include <QVector>
#include <QTimer>
#include <QSet>

class graphicView : public QWidget
{
    Q_OBJECT

public:
    explicit graphicView(QWidget *parent = nullptr);
    void setHours(const QVector<int> &hours);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    QVector<int> hours;
    QTimer *timer;
    QSet<int> notifiedHours;
private slots:
    void checkFeedingTime();
};

#endif // GRAPHICVIEW_H
