#include <stdio.h>
void fun1(int n)
{
    if (n > 0)
    {
        /* 
        *tail recursion
        * * recursive call is at the end or below the statements(at tail) 
        * * printf executes 1st and then recursion occurs
        * *  O/P: 3 2 1
                            */
        printf("%d \n", n); 
        // * recursive call
        fun1(n - 1);
        /*
        *head recursion 
        * * recursive call is at the begining or above the statements (at head)
        * * every recursive is called at first and printf executes at exit of each function starting from 
        * * the last recursive call
        * * O/P : 1 2 3
        */
        printf("%d",n); 
    }
}

int main()
{
    printf("starting the program \n");
    int x = 4;
    fun1(3);
}