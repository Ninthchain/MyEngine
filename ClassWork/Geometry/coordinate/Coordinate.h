#pragma once

class Coordinate
{
    double *x_;
    double *y_;
    
public:
    Coordinate(double x, double y);
    ~Coordinate();
    void setX(double x);
    void setY(double y);
    
    double getX() const;
    double getY() const;
};
