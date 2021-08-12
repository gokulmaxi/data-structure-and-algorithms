
#include <iostream>
using namespace std;
 
int main()
{
    // A normal integer variable
    int Var ;
    cin >> Var;
 
    int *ptr = &Var;
 
    cout << "Value of Var = "<< *ptr << endl;
 
    cout << "Address of Var = " <<  ptr << endl;
 
    *ptr = 20; // Value at address is now 20
 
    cout << "After doing *ptr = 20, *ptr is "<< *ptr << endl;
 
    return 0;
}
 
