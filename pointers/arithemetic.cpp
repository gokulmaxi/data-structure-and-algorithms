#include <bits/stdc++.h>
using namespace std;
// Driver program
int main() {
  // Declare an arr ay
  int sizeV;
  cout<<sizeV<<endl;
  std::cout << "size of the array" << std::endl;
  cin >> sizeV;
  int v[sizeV];

  for(int i=0; i<sizeV; i++){
  cout<<"Insert element "<<i<<": ";
  cin>>v[i];
}
  // Declare pointer variable
  int *ptr;

  // Assign the address of v[0] to ptr
  ptr = v;
  cout<<ptr[0]<<" "<<ptr[1];
  cout<<*(v+2)<<endl;
  for (int i = 0; i < sizeV; i++) {
    printf("Value of *ptr = %d\n", *ptr);
    printf("Value of ptr = %p\n\n", ptr);
    // Increment pointer ptr by 1
    ptr++;  
  }
  //also can be called by ptr[1]
}
