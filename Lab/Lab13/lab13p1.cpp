#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;
const double PI = atan(1)*4;

class Shape {
public:
    virtual double getArea() const = 0;
    virtual string shapeName() const = 0;
};

class Rectangle : public Shape {
private:
    int length;
    int width;
public:
    Rectangle(int l, int w): length(l), width(w){}
    double getArea() const{
        return length*width;
    }
    string shapeName() const{
        return "Rectangle";
    }
};

class Circle : public Shape {
private:
    int radius;
public:
    Circle(int r):radius(r){}
    double getArea() const{
        return PI * radius * radius;
    }
    string shapeName() const{
        return "Circle";
    }
};

class Triangle : public Shape {
private:
    int a,b,c;
public:
    Triangle(int a, int b, int c): a(a),b(b),c(c){}
    double getArea() const{
        double s = (a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    string shapeName() const{
        return "Triangle";
    }
};

ostream& operator << (ostream& os, Shape* s){
    os << s->shapeName() << "'s area is " << s->getArea() << endl;
    return os;
}
    
int main(){
    vector<Shape*> vs;
    
    Rectangle r(10,20);
    Circle c(10);
    Triangle t(18,30,24);
    
    vs.push_back(&r);
    vs.push_back(&c);
    vs.push_back(&t);

    for(auto s : vs)
        cout << s;

    return 0;
}
