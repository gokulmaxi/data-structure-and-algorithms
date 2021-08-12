#include <iostream>
using namespace std;
int main()
{
  void *ptr; // void pointer declaration
  int *ptr1;
  int a; // integer variable initialization
  cin >> a;
  ptr = &a; // storing the address of 'a' variable in a void pointer variable.
  std::cout << &a << std::endl;
  ptr1 = (int *)ptr;
  std::cout << *ptr1 << std::endl;
  return 0;
}