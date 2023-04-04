#include "Point.h"

Point::Point(Coordinate coordinate)
{
    this->coordinate_ = &coordinate;
}
Point::~Point()
{
    delete this->coordinate_;
}

double Point::getX() const
{
    return this->coordinate_->getX();
}

double Point::getY() const
{
    return this->coordinate_->getY();
}

void Point::move(Coordinate newCoord)
{
    this->coordinate_ = &newCoord;
}

Point& Point::operator=(Point rvalue)
{
    *this = rvalue;
    return *this;
}

bool Point::operator>(Point lvalue, Point rvalue) const
{
    return (lvalue.getX() > rvalue.getX()) && (lvalue.getY() > rvalue.getY());
}

bool Point::operator<(Point lvalue, Point rvalue) const
{
    return (lvalue.getX() < rvalue.getX()) && (lvalue.getY() < rvalue.getY());
}

Point& Point::operator+(Point lvalue, Point rvalue) const
{
    Point *temp = new Point;
    temp->coordinate_->setX(lvalue.getX() + rvalue.getX());
    temp->coordinate_->setY(lvalue.getY() + rvalue.getY());
    
    return *temp;
}

Point& Point::operator+=(const Point& rvalue)
{
    this->coordinate_->setX(this->getX() + rvalue.getX());
    this->coordinate_->setY(this->getY() + rvalue.getY());
    return *this;
}

