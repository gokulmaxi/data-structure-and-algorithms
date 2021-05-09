#include <stdio.h>
/**
 * find the n th fibbonaci value using iteration 
 * @param n position the term to be found
 * @return fibonacci value at nth position
*/
int fib(int n)
{
    int t0 = 0, t1 = 1, s = 0, i;
    if (n <= 1)
        return n;
    for (i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}
/**
 * find the n th fibbonaci value using recursion
 * expensive recursion - repeated call of recursion for smae value
 * @param n position the term to be found
 * @return fibonacci value at nth position
*/
int rfib(int n)
{
    if (n <= 1)
        return n;
    return rfib(n - 2) + rfib(n - 1);
}
int F[10];
/**
 * find the n th fibbonaci value using memoization 
 * @param n position the term to be found
 * @return fibonacci value at nth position
*/
int mfib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = mfib(n - 2);
        if (F[n - 1] == -1)

            F[n - 1] = mfib(n - 1);
        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
}
int main()
{
    int i;
    //for loop fills the empty array wit -1 which is not a value of fibonacci series
    for (i = 0; i < 10; i++)
        F[i] = -1;
    printf("%d \n", mfib(5));
    return 0;
}