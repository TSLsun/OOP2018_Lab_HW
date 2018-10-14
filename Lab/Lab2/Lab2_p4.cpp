#include <iostream>
#include "Triangle.h"
#include <cmath>

using namespace std;

double dist(Vertex a, Vertex b)
{
    return sqrt(pow((a.x-b.x),2) + pow((a.y-b.y),2));
}


void formTri(Triangle t){
    double a = dist(t.B, t.C);
    double b = dist(t.A, t.C);
    double c = dist(t.A, t.B);
    if(a*b*c == 0)
        cout << "These points cannot form a triangle!!\n";
    else
    {
        double s = (a+b+c) / 2;
        if(s-a == 0 || s-b==0 || s-c==0)
            cout << "These points cannot form a triangle!!\n";
        else
            cout << "These points can form a triangle!!\n";
    }
        
    //double innerA = (t.B.x-t.A.x)*(t.C.x-t.A.x) + (t.B.y-t.A.y)*(t.C.y-t.A.y);
    //double innerB = (t.A.x-t.B.x)*(t.C.x-t.B.x) + (t.A.y-t.B.y)*(t.C.y-t.B.y);
    //double innerC = (t.B.x-t.C.x)*(t.A.x-t.C.x) + (t.B.y-t.C.y)*(t.A.y-t.C.y);
    /*
    if(pow(dist(t.A, t.B),2) * pow(dist(t.A,t.C),2) - innerA == 0)
        cout << "These points cannot form a triangle!!\n";
    else
        cout << "These points can form a triangle!!\n";
    */
}

int main()
{
    Triangle t;
    cout << "Please input the x & y coordinates of the 1st vertex: ";    
    cin >> t.A.x >> t.A.y;
    cout << "Please input the x & y coordinates of the 2nd vertex: ";    
    cin >> t.B.x >> t.B.y;
    cout << "Please input the x & y coordinates of the 3rd vertex: ";    
    cin >> t.C.x >> t.C.y;

    formTri(t);

    return 0;
}
