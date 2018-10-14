#include "Rectangle.h"
#include "Square.h"
#include <iostream>

int Rectangle::area()
{
    return this->width * this->height; 
}

void Rectangle::convert(Square s)
{
    this->width = s.side;
    this->height = s.side;
}
/*
std::ostream& &print(std::ostream&, Rectangle r)
{
    std::cout << "width: " << r.width << ", height: " << r.height << ", and area: " << r.area() << "\n";
}
*/
void Rectangle::print()
{
    std::cout << "width: " << this->width << ", height: " << this->height << ", and area: " << this->area() << "\n";
}
