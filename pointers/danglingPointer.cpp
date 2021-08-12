
// The pointer pointing to local variable becomes
// dangling when local variable is not static.
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
void testFun(){
    char val[5];
    // int * ptr= (int *)malloc(sizeof(val));
    cout<<"size of val"<<sizeof(val)<<endl;
}
// Driver Code
int main()
{
    int *ptr;   // wildpointer
    ptr = (int *)malloc(sizeof(int));
    testFun();
    free(ptr); //dangling pointer

    ptr = NULL; //NULL pointer
}