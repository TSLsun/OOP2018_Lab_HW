#include "RandomArray.h"

time_t RandomArray::seed_time = time(0); 

void RandomArray::setSeed()
{
    srand(seed_time);
}
void RandomArray::loadArray()
{
    this->ir = std::shared_ptr<int>(new int[this->n]);
    for (int i=0; i!= this->n; i++)
        this->ir.get()[i] = rand()%1000;
}
void RandomArray::printArray()
{
    for (int i=0; i!= this->n; i++)
        std::cout << this->ir.get()[i] << " ";
    std::cout << "\n";
}
void RandomArray::setSize(int n)
{
    this->n = n;
}
