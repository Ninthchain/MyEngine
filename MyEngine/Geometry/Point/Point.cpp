#include "Point.hpp"
#include <cmath>

double Point::getDistanceTo(Point &target)
{
    return sqrt(
        pow(this->getX() - target.getX(), 2) +
        pow(this->getY() - target.getY(), 2)
    );
}