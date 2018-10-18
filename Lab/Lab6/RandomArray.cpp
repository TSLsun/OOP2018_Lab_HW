#include <ctime>
#include <cstdlib>
#include <iostream>
#include "RandomArray.h"

time_t RandomArray::seed_time = time(0); 

void RandomArray::setSeed()
{
    srand(seed_time);
}
void RandomArray::loadArray()
{
    this->ir = new int[this->n];
    for (int i=0; i!= this->n; i++)
        this->ir[i] = rand()%1000;
}
void RandomArray::printArray()
{
    for (int i=0; i!= this->n; i++)
        std::cout << this->ir[i] << " ";
    std::cout << "\n";
}
void RandomArray::freeArray()
{
    delete[] this->ir; 
}

