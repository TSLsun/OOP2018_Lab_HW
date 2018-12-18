#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <cstdlib>

using namespace std;
//const double PI = atan(1)*4;
const double PI = 3.1415;
const unsigned SIZE = 20;

class Shape {
public:
    virtual void printArea() const = 0;
    virtual string shapeName() const = 0;
    virtual ~Shape(){}
};

class Circle : public Shape {
private:
    int radius;
public:
    Circle(int r):radius(r){}
    void printArea() const{
        cout << PI * radius * radius << endl;
    }
    string shapeName() const{
        return "Circle";
    }
};

class Rectangle : public Shape {
protected:
    int length;
    int width;
public:
    Rectangle(int l, int w): length(l), width(w){}
    virtual void printArea() const{
        cout << length*width << endl;
    }
    virtual string shapeName() const{
        return "Rectangle";
    }
};

class Square : public Rectangle {
public:
    Square(int s): Rectangle(s,s){}
    string shapeName() const{
        return "Square";
    }
};

class ShapeGroup: public Shape {
protected:
    Shape** shapeDyPtr = nullptr;  
    unsigned count = 0;   

public:
    ShapeGroup(){
		shapeDyPtr = new Shape*[SIZE];
    }
    ShapeGroup(const ShapeGroup& rhs){
        cout << "ShapeGroup::Copy Constructor\n";
    	count = rhs.count;	 
		shapeDyPtr = new Shape*[SIZE];
		for(unsigned i=0; i!=count; ++i){
            shapeDyPtr[i] = rhs.shapeDyPtr[i];
		}
    }
	ShapeGroup& operator=(const ShapeGroup& rhs){
        if(this ==&rhs)
            return *this;
        if(shapeDyPtr != nullptr)
            delete[] shapeDyPtr;
        count = rhs.count;
		for(unsigned i=0; i!=count; ++i){
            shapeDyPtr[i] = rhs.shapeDyPtr[i];
		}
        return *this; 
    }
    virtual void insert(Shape* s){
        count += 1; 
        shapeDyPtr[count-1] = s;
    }
    virtual void printArea() const{
        for(unsigned i=0; i!=count; ++i)
        { 
            cout << shapeDyPtr[i]->shapeName() << "'s area:" << endl;
            shapeDyPtr[i]->printArea(); 
        }
        cout << endl;
    }
    virtual string shapeName() const{
        return "****ShapeGroup";
    }
    virtual ~ShapeGroup(){
        cout << "ShapeGroup::Destructor\n";
        //for (unsigned i=0; i!=count; i++)
            //delete shapeDyPtr[i];
        delete[] shapeDyPtr;
    }
};

class ShapeGroupID: public ShapeGroup {
protected:
    int* randID = nullptr;
public:
    ShapeGroupID():ShapeGroup(){
        randID = new int[SIZE];
		for (unsigned index = 0; index != SIZE; ++index)
			randID[index] = rand()%100;
    }
    ShapeGroupID(const ShapeGroupID& rhs): ShapeGroup(rhs){
		cout << "ShapeGroupID::Copy Contructor\n";
        randID = new int[SIZE];
		for (unsigned index = 0; index != SIZE; ++index)
			randID[index] = rhs.randID[index];
    }
	ShapeGroupID& operator=(const ShapeGroupID& rhs){
        if(this == &rhs)
            return *this;
        this->ShapeGroup::operator=(rhs);
        if(randID != nullptr)
            delete randID;
        randID = new int[SIZE];
		for (unsigned index = 0; index != SIZE; ++index)
			randID[index] = rand()%100;
        return *this;
    }
    virtual void printArea() const{
        for(unsigned i=0; i!=count; ++i)
        { 
            cout << shapeDyPtr[i]->shapeName() << " of id " << randID[i] << "'s area:" << endl;
            shapeDyPtr[i]->printArea(); 
        }
        cout << endl;
    }
    virtual string shapeName() const{
        return "****ShapeGroupID";
    }
	~ShapeGroupID(){
        cout << "ShapeGroupID::Destructor\n";
        delete[] randID;
	}
    
};

int main(){
    srand(time(0));
    ShapeGroupID sgID;

    Rectangle* r1 = new Rectangle(10,20);
    Circle* c1 = new Circle(10);
    Square* s1 = new Square(10);
    sgID.insert(r1);
    sgID.insert(c1);
    sgID.insert(s1);

    ShapeGroupID sgID2;
    Circle* c2 = new Circle(5);
    Square* s2 = new Square(5);
    sgID2.insert(c2);
    sgID2.insert(s2);

    ShapeGroupID sgID3(sgID);
    Circle* c3 = new Circle(20);
    Square* s3 = new Square(20);
    sgID3.insert(c3);
    sgID3.insert(s3);
    sgID3.insert(&sgID2);

    sgID3.printArea();

    delete r1; delete c1; delete s1; delete c2; delete s2;
    delete c3; delete s3;

    return 0;
}
