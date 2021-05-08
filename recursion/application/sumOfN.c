#include <stdio.h>
/**
 * sum of first n natural numbers using formula
 * @param n last value to be summed up
 * @return summed up value
*/
int sumF(int n)
{
    return n * (n + 1) / 2;
}
/**
 * sum of first n natural numbers using loop
 * @param n last value to be summed up
 * @return sum of n natural numbers
*/
int sumL(int n)
{
    int summation = 0, i;
    for (i = 1; i <= n; i++)
    {
        summation = summation + i;
    }
    return summation;
}
/**
 * sum of first n natural numbers using recursion 
 * @param n last value to be summed up 
 * @return sum of n natural numbers
 */
int sumR(int n){
    if (n==0)
    {
        return 0;
    }
    return sumR(n-1)+n;
}

int main(int argc, char const *argv[])
{
    int sum=sumR(5);
    printf("%d \n",sum);
    return 0;
}
