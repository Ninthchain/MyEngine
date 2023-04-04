#include "Coordinate.hpp"

Coordinate::Coordinate()
{
    this->x_ = new double;
    this->y_ = new double;

    *this->x_ = 0.0;
    *this->y_ = 0.0;
}
Coordinate::Coordinate(double& x, double& y)
{
    this->x_ = &x;
    this->y_ = &y;
}

Coordinate::~Coordinate()
{
    delete this->x_;
    delete this->y_;
}

Coordinate& Coordinate::operator+(const Coordinate &rvalue)
{
    Coordinate *temp = new Coordinate;
    *temp->x_ += *rvalue.x_;
    *temp->y_ += *rvalue.y_;

    return *temp;
}
Coordinate& Coordinate::operator+=(const Coordinate &rvalue)
{
    *this->x_ += *rvalue.x_;
    *this->y_ += *rvalue.y_;
}
Coordinate& Coordinate::operator=(const Coordinate &rvalue)
{
    *this->x_ = *rvalue.x_;
    *this->y_ = *rvalue.y_;

    return *this;
}

double Coordinate::getX()
{
    return *this->x_;
}

double Coordinate::getY()
{
    return *this->y_;
}

void Coordinate::move(double x, double y)
{
    this->x_ = &x;
    this->y_ = &y;
}
