#include <iostream>
using namespace std;

double division(int a, int b)
{
  double ans;
  try
  {
    // if (b == 0)
    //   throw "division by zero";
    ans = a / b;
  }
  catch (...)
  {
    cout << "i reached here-2" << endl;

    // std::cerr << e.what() << '\n';
  }
  cout << "i reached here" << endl;
  return ans;
}

int main()
{
  int x = 50;
  int y = 0;
  double z = 0;

  try
  {
    z = division(x, y);
    cout << "answer:" << z << endl;
  }

  catch (...)
  {
    cout << "i reached here-1" << endl;

    // cerr << msg << endl;
  }

  return 0;
}
