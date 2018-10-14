#ifndef TRIANGLE_H
#define TRIANGLE_H

struct Vertex {
    double x;
    double y;
};

struct Triangle {
    Vertex A;
    Vertex B;
    Vertex C;
};

#endif
