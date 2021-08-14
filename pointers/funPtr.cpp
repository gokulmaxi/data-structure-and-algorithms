#include <stdio.h>
#include <iostream>
int fun(int a)
{
    printf("Value of a is %d\n", a);
    return a;
}

int main()
{
    int (*fun_ptr)(int) = fun;
    std::cout << fun_ptr(10)<<std::endl;
    return 0;
}