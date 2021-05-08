#include <stdio.h>
void funB(int n); //prototype 
void funA(int n)
{
    if (n > 0)
    {
        printf("%d \n", n);
        /*
        * * This function is not recursive at this point as it has not 
        * * called itself
        */
        funB(n - 1);                  
    }
}
void funB(int n)
{
    if (n > 1)
    {
        printf("%d \n", n);
        /*
        * * At this point it has called funA.when this function called 
        * * by funA it is indirectly calling itself making it recursive
        */
        funA(n / 2);
    }
}
int main()
{
    funA(20);
    return 0;
}