// http://blog.csdn.net/u014355480/article/details/44659245

#include <cstdio>

struct matrix
{
    unsigned long m[2][2];
};

matrix base = { 1, 1, 1, 0 };

// matrix multiple
matrix multiple(matrix A, matrix B)
{
    matrix temp;
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            temp.m[i][j] = 0;
            for (int k=0; k<2; k++)
                temp.m[i][j] = temp.m[i][j] + A.m[i][k] * B.m[k][j]; 
        }
    }
    return temp;
}

matrix matrix_pow(matrix A, long n)
{
    matrix ans;
    // initial base matrix (I_2)
    ans.m[0][0] = ans.m[1][1] = 1;
    ans.m[0][1] = ans.m[1][0] = 1;
    
    while(n)
    {
        if(n & 1) ans = multiple(ans, A);
        A = multiple(A, A);
        n >>= 1;  //divide 2
    }
    return ans;
}

long Fib(long n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else
    {
        matrix F = matrix_pow(base, n-2);
        return (F.m[0][0] * 1 + F.m[0][1] * 0);
    }
}

int main()
{
    printf("Please input the n number: ");
    long n;
    scanf("%ld", &n);
    if (n<0)
        printf("The Fibonacci number is: -1\n");
    else
        printf("The Fibonacci number is: %ld\n", Fib(n));

    return 0;
}
