#include "point.h"

Point::Point()
{

}

Point::Point(int x, int y){
    this -> x = x;
    this -> y = y;
}

int Point::getX() const
{
    return x;
}

int Point::getY() const
{
    return y;
}

void Point::drawPoint(QPainter *painter)
{
    qDebug("drawPoint x = %d, y = %d", x, y);
    //count++;
    QPen mypen = painter->pen();
    //if (count < 5)
    mypen.setWidth(width);
    //else
       //width = 2;
       //mypen.setWidth(width);
    painter->setPen(mypen);
    painter->drawLine(x - offset, y - offset, x + offset, y + offset);
    painter->drawLine(x - offset, y + offset, x + offset, y - offset);
    qDebug("%d", width);

}


void Point::setOffset(int newOffset)
{
    offset = newOffset;
}

void Point::setCoords(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Point::setY(int y)
{
    this->y = y;
}

void Point::setX(int x)
{
    this->x = x;
}

int Point::getWidth() const
{
    return width;
}

void Point::setWidth(int newWidth)
{
    width = newWidth;
}


int Point::getOffset() const
{
    return offset;
}
