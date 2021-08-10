#include <iostream>
#include <ostream>
using namespace std;

void functionTest(int v, int *w) {
  v = 30;
  // *w = 30;
  int *bb;
  bb =(int*)w;
  *bb=30;
  cout << "v=" << v << "   w=" << bb<<endl;
  cout << "v=" << &v << "   w=" << &bb<<endl;

}
void fun(int); // function prototype 
int main(int argc, const char **argv) {
  int a = 20;
  int b = 20;
  functionTest(a, &b);
  cout << "a=" << a << "   b=" << b<<endl;
  cout << "a=" << &a << "   b=" << &b<<endl;

        fun(1);
  return 0;  // destructor executed for local scopes : use exit(0) for not removing local scopes
}

void fun(int i){
        cout<<"fun was just called"<<endl;
}
