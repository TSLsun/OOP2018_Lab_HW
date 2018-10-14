#include <iostream>
#include "Rectangle.h"
#include "Square.h"
using namespace std;


int main()
{
    cout << "Please input the side of the square: ";
    int side;
    cin >> side;

    Rectangle rect;
    Square sqr(side);
    rect.convert(sqr);

    cout << "The Rectangle has:" << endl;
    rect.print();

    cout << "Please input the width and height of a rectangle: ";
    int width, height;
    cin  >> width >> height;

    Rectangle rect2(width, height);
    Square sqr2;
    sqr2.convert(rect2);

    cout << "The square has:" << endl;
    sqr2.print();

    return 0;
}
