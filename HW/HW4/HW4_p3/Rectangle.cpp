#include "Rectangle.h"
#include "Square.h"
#include <iostream>

int Rectangle::getW() 
{ 
    return this->width;
}
int Rectangle::getH()
{ 
    return this->height;
}
int Rectangle::area()
{ 
    return this->width * this->height; 
}

void Rectangle::convert(Square s)
{
    this->width = s.getSide();
    this->height = s.getSide();
}

void Rectangle::print()
{
    std::cout << "width: " << this->width << ", height: " << this->height << ", and area: " << this->area() << "\n";
}
