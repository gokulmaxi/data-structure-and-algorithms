#include <iostream>
using namespace std;

int main()
{
   int x;

   // Some code
   cout << "enter your input \n";
   cin >> x;
   try
   {
      cout << "Inside try \n";
      if (x < 0)    // throws error 
      {
         throw x;
         cout << "After throw (Never executed) \n";
      }
      else if (x = 1)    // this terminate the program abruptly
      {
         cout<<"char throw";
         throw 'a';
      }
   }
   catch (int x)
   {
      cout << "Exception Caught \n";
   }
   cout << "After catch (Will be executed) \n";

   return 0;
}
