#include<iostream>
#include <ostream>
using namespace std;
  
class Test 
{
   public:
     static int i;
     char tag;  // tag to address diffrent class 
     Test(char a)
     {
        tag=a;
             std::cout << "constructor of "<<tag<< std::endl;
     }
     ~Test(){
        cout<<"destructor of "<<tag<<endl;
     }
};
  int Test::i =1;  //if not defined - error during compilation
int main()
{
  
   Test obj1('a'); 
  // prints value of i
  cout << obj1.i << endl;   
  cout<<"explaining static class \n";
  if(true){
          static Test test('b');
          Test test2('c');
  }
  cout<<"end of main \n";
}
