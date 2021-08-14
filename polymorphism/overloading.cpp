#include <bits/stdc++.h>
  
using namespace std;
class TestClass
{
    public:
      
    void func(int x)
    {
        cout << "value of x is " << x << endl;
    }
      
    void func(double x)
    {
        cout << "value of x is " << x << endl;
    }
      
    void func(int x, int y)
    {
        cout << "value of x and y is " << x << ", " << y << endl;
    }
};
  
int main() {
      
    TestClass obj1;
 
    obj1.func(7);
      
    // The second 'func' is called
    obj1.func(9.132);
      
    // The third 'func' is called
    obj1.func(85,64);
    return 0;
} 