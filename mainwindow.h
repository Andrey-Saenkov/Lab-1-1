#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <point.h>
#include <QVector>
#include <QList>>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public: // это и есть инкапсуляция в ООП
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

    //int getCounts() const;
    //void setCounts(int newCounts);

private: //Это и есть инкапсуляция в ООП
    Ui::MainWindow *ui;
    //int counts = 5;
    QList <Point> points;
    //QVector<Point> points;
    Point p;
    //int movingPointInd = -1;
    Point hitPoint;
};
#endif // MAINWINDOW_H
