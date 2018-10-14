#include <iostream>

int main()
{
    std::cout << "Enter a sequence of numbers to be summed: ";
    int sum = 0;
    int num;
    std::cin >> num;
    while(num >= 0)
    {
        sum += num;
        std::cin >> num;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
