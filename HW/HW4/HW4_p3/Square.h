#ifndef SQUARE_H
#define SQUARE_H
//#include "Rectangle.h"


class Rectangle;

class Square
{
// friend void Rectangle::print(); 
// friend void Rectangle::convert(Square s);

private:
    int side;

public:
    Square(int s): side(s) { }
    Square(): side(1) {}
    int getSide();
    int area();
    void print();
    void convert(Rectangle r);
};



#endif
