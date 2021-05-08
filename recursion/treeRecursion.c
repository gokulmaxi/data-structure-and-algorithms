#include <stdio.h>
/*
* * a recursive function calling itself for more than one time
*/
void fun1(int x)
{
    if (x > 0)
    {
        printf("%d \n", x);

        fun1(x - 1);
        fun1(x - 1);
    }
}
int main(int argc, char const *argv[])
{
    fun1(3);
    return 0;
}
