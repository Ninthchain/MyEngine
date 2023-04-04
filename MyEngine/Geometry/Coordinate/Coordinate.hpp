#pragma once

class Coordinate
{
private:
    double *x_;
    double *y_;

public:
    Coordinate();
    Coordinate(double& x, double& y);

    ~Coordinate();
    
    Coordinate& operator+=(const Coordinate& rvalue);
    Coordinate& operator+(const Coordinate& rvalue);
    
    Coordinate& operator=(const Coordinate& rvalue);

    double getX();
    double getY();
};