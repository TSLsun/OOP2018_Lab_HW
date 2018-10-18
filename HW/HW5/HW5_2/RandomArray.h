#ifndef RANDOMARRAY_H
#define RANDOMARRAY_H

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <memory>

class RandomArray
{
private:
    int n;
    std::shared_ptr<int> ir;    
    static time_t seed_time;

public:
    RandomArray():n(5){}
    RandomArray(int n):n(n){}

    static void setSeed();
    void loadArray();
    void printArray();
    void setSize(int);
};

#endif
