#pragma once
#include "../coordinate/Coordinate.h"

class Point
{
    Coordinate *coordinate_;
    
public:
    Point(Coordinate coordinate = Coordinate(0, 0));
    
    ~Point();

    double getX() const;

    double getY() const;

    void move(Coordinate newCoord);

    bool operator>(Point lvalue, Point rvalue) const;
    bool operator<(Point lvalue, Point rvalue) const;

    Point& operator+(Point lvalue, Point rvalue) const;
    Point& operator+=(const Point& rvalue);
    Point& operator=(Point rvalue);
};
