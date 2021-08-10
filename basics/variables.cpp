#include <iostream>
#include <ostream>
using namespace std;
char a='a';    //-128 to 127
unsigned char b='a';
const char cChar= 'a';    // stored in RO(read only)
int c=1;
// demo to use satic variable
void demo() {
  static int var1 = 0;
  int var2 = 0 ;
  cout << "var 1= " << var1 << "  var2 =" << var2 << endl;
  var1++;
  var2++;
}
int main() {
  // declaration and definition
  char a123 = 78;      //65 to 90 A-Z 97-122 a-z 
  // This is also both declaration and but defined to garbage value
  float b;
  // multiple declarations
  int c, d, e;
  cout << a123 << endl;
  cout << "demo for static variable" << endl;
  for (int i = 0; i < 5; i++) {
    demo();
  }
  return 0;
}
