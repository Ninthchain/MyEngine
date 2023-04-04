#pragma once

class Size
{
    double *width_;
    double *height_;
public:
    Size(double width, double height)
    {
        this->height_ = &height;
        this->width_ = &width;
    }

    ~Size()
    {
        delete this->height_;
        delete this->width_;
    }

    void change(double width, double height)
    {
        this->width_ = &width;
        this->height_ = &height;
    }

    double getWidth() const
    {
        return *this->width_;
    }
    double getHeight() const
    {
        return *this->height_;
    }
};
