#pragma once

class Drawable
{
    unsigned char *drawingSymbol;
    
public:
    Drawable(unsigned char symbol)
    {
        this->drawingSymbol = &symbol;
    }

    void setDrawingSymbol(unsigned char symbol)
    {
        this->drawingSymbol = &symbol;
    }
    
    void draw();
};
