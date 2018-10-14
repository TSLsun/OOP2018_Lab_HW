#ifndef RECTANGLE_H
#define RECTANGLE_H
//#include "Square.h"

class Square;

class Rectangle
{
private:
    int width;
    int height;

public:
    Rectangle(int w, int h): width(w), height(h) {}
    Rectangle(): width(1), height(1) {}
    int area();
    void convert(Square s);
    void print();
    int getW();
    int getH();
};


#endif
