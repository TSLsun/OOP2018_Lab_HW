#ifndef RECTANGLE_H
#define RECTANGLE_H
//#include "Square.h"

class Square;

class Rectangle
{
//friend std::ostream& &print(std::ostream&, Rectangle r);
private:
    int width;
    int height;

public:
    int area();
    void convert(Square s);
    void print();
};

//std::ostream& &print(std::ostream&, Rectangle r);

#endif
