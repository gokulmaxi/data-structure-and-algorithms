#include<iostream>
using namespace std;
// name of array is a const pointer i.e can't be incremented
//but can be pointer the address can be incremented
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5};
    int* ptr1;
    ptr1 = arr; //holds the same address but not const
    cout<<*(ptr1++)<<endl;
    return 0;
}