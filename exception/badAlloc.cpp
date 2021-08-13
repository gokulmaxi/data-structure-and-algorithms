#include <iostream>
#include <new>

using namespace std;

int main()
{

    try
    {
     int * myarray = new int[1000000000000]; 
    }
    catch (bad_alloc)
    {
        cout<< "bad allocation";
    }
    return 0;
}