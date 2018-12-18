#include <iostream>
using namespace std;

class Rectangle{
protected: 
	double length;
	double width;
public:
	Rectangle(double l, double w): length(l), width(w){}
	virtual void print(){
        cout << "Rectangle's Length = " << length << ", Width = " << width << endl;
    }
};

class Box: public Rectangle{
private:
    double height;
public:
    Box(double l, double w, double h): Rectangle(l,w), height(h){}
    void print(){
        cout << "Box's Length = " << length << ", Width = " << width << " and Height = " << height << endl;
    }
};

class Square: public Rectangle{
public:
    Square(double s): Rectangle(s,s){}
    void print(){
        cout << "Square's Length = " << length << endl;
    }
};

int main(){
	Rectangle* shape;
	cout << "What do you want to create (Rectangle, Box, or Square)? ";
	char c;
	cin >> c;
	double l = 0, w = 0, h = 0;
	switch(c){
        case 'R':
            cout << "Please input the length and width: ";
            cin >> l >> w ;
			shape = new Rectangle(l,w);	
			break;

		case 'B':
            cout << "Please input the length, and width, and height: ";
            cin >> l >> w >> h;
			shape = new Box(l,w,h);	
			break;
		case 'S':
            cout << "Please input the length: ";
            cin >> l;
			shape = new Square(l);
			break;
		default:
			shape = new Rectangle(l,w);
			cout << "Wrong input!" << endl;
	}
    shape->print();
	return 0;
}
