#include "Vector.h"

void Vector::moveStartPoint(const Coordinate& newCoord) const
{
    *this->startpoint_ = newCoord;
}
void Vector::moveEndPoint(const Coordinate& newCoord)
{
    *this->endpoint_ = newCoord;
}

double Vector::getLength()
{
    
}



void Vector::operator+=(const Vector& rvalue)
{
    if(rvalue.startpoint_ > this->startpoint_)
        this->startpoint_ = rvalue.startpoint_;
        
    *this->endpoint_ += *rvalue.endpoint_;
}
