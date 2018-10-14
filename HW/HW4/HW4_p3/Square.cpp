#include "Rectangle.h"
#include "Square.h"
#include <iostream>

int Square::getSide()
{
    return this->side;
}
int Square::area()
{
    return this->side * this->side; 
}

void Square::convert(Rectangle rect)
{
    if(rect.getW() == rect.getH())
    {
        std::cout << "Successful convertion to Square.\n";
        this->side = rect.getW();
    }
    else
    {
        std::cout << "Conversion Error! Square not changed.\n";    
    }

}
void Square::print()
{
    std::cout << "side: " << this->side << ", and area: " << this->area() << "\n";
}
