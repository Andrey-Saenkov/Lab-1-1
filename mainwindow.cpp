#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *){
    QPainter painter(this);
    for (int g = 0; g < points.size(); g++){
        if (g < 5)
          points[g].drawPoint(&painter);
        else
          points[g].setWidth(2);
          points[g].drawPoint(&painter);
        //else
            //mypen.setWidth
        //if (g != points.size() - 1){
            //painter.drawLine(points[g].getX(),points[g].getY(),points[g + 1].getX(),points[g + 1].getY());
        //}
    }

}
void MainWindow::mousePressEvent(QMouseEvent *event)
{

    if (points.size() < 10)
        points.append(Point(event->pos().x(), event->pos().y()));

    repaint();
}
void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    //qDebug("Release x = %d y = %d",event->x(),event->y());
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)//event-> x(), event-> y()
{

}



