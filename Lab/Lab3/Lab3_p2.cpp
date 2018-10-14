#include <iostream>
#include "Triangle.h"
#include "Vertex.h"
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

double dist_square(Vertex a, Vertex b)
{
    return pow((a.x-b.x),2) + pow((a.y-b.y),2);
}


bool isRightTri(Triangle t){
    double a = dist_square(t.B, t.C);
    double b = dist_square(t.A, t.C);
    double c = dist_square(t.A, t.B);
   // cout << "(a,b,c)=" << a <<" "<< b << " " << c << "\n";
    if(a*b*c == 0) return false;
    vector<double> sides = {a,b,c};
    sort(sides.begin(),sides.end());
   // cout << "sort: " << sides[0] << " " << sides[1] << " " << sides[2] << "\n";
    if(sides[0] + sides[1] == sides[2])
        return true;
    else
        return false; 
}

int main()
{
    vector<Triangle> v;
    unsigned cnt = 0;
    cout << "How many Triangles will you input? ";
    unsigned n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        Triangle t;
        cout << "Input for the " << ++cnt << " triangle:\n";
        cout << "\tPlease input the x & y coordinates of the 1st vertex: ";
        cin >> t.A.x >> t.A.y;
        cout << "\tPlease input the x & y coordinates of the 2nd vertex: ";    
        cin >> t.B.x >> t.B.y;
        cout << "\tPlease input the x & y coordinates of the 3rd vertex: ";    
        cin >> t.C.x >> t.C.y;
        v.push_back(t);
    }
    cout << "Done reading Triangles.\n";

    cnt = 0;
    for (auto& e: v)
    {
        e.right = isRightTri(e);
        if(e.right)
            cout << "Triangle " << ++cnt << " is a right triangle!\n";
        else
            cout << "Triangle " << ++cnt << " is NOT a right triangle!\n";
       
    }

    return 0;
}
