#include <stdio.h>
/**
 * factorial of n numbers using recursion
 * @param n n th value to calculate its factorial 
 * @result factorial of n
*/
int factorialR(int n)
{
    if (n > 0)
    {
        return factorialR(n - 1) * n;
    }
    else
    {
        return 1;
    }
}
int main(int argc, char const *argv[])
{
    int r = factorialR(5);
    printf("%d \n",r);
    return 0;
}
