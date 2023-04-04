#include "Coordinate.h"

Coordinate::Coordinate(double x, double y)
{
    this->x_ = &x;
    this->y_ = &y;
}

Coordinate::~Coordinate()
{
    delete this->x_;
    delete this->y_;
}

void Coordinate::setX(double x)
{
    this->x_ = &x;
}
void Coordinate::setY(double y)
{
    this->y_ = &y;
}

double Coordinate::getX() const
{
    return *this->x_;
}
double Coordinate::getY() const
{
    return *this->y_;
}




