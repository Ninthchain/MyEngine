#pragma once
#include <valarray>

#include "../point/Point.h"

class Vector
{
    Point *startpoint_;
    Point *endpoint_;
    
public:
    Vector(Point startp, Point endp);
    ~Vector();

    Point getEndPoint();
    Point getStartPoint();

    void moveStartPoint(const Coordinate& newCoord) const;
    void moveEndPoint(const Coordinate& newCoord);

    void operator +=(const Vector& rvalue);
    
    double getLength();
    
};
