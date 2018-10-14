#include <cstdio>

using namespace std;

int main()
{
    int a,b;
 
    printf("Please input two integers: ");
    scanf("%d%d", &a, &b);    
    printf("(a,b) = (%d,%d)\n", a, b); 
 
    int *ptrA = &a;
    int *ptrB = &b;
    printf("Please input two new integers: ");
    scanf("%d%d", &*ptrA, &*ptrB);
    
    
    printf("(a,b,*ptrA,*ptrB) = (%d,%d,%d,%d)\n", a, b, *ptrA, *ptrB);
    printf("end of assignment 3\n");  
    
    return 0;
}
