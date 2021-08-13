#include <iostream>
#include <string>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;

public:
    class InchesExecp
    {
    public:
        string origin;
        float iVlaue;
        InchesExecp(string org, float in)
        {
            origin = org;
            iVlaue = in;
        }
    };

    Distance()
    {
        feet = 0;
        inches = 0;
    };
    Distance(int ft, float in)
    {
        if (in >= 12)
        {
            throw InchesExecp("distance constructor", in);
        }

        feet = ft;
        inches = in;
    }
    void getDistance()
    {
        cout << endl
             << "enter feet:";
        cin >> feet;
        if (feet >= 12)
        {
            throw InchesExecp("getDistance()", feet);
        }
    }
    void showDist()
    {
        cout << feet << "|" << inches;
    }
};

int main()
{
   try
   {
       float ft,in;
       cin>>ft>>in;
       Distance dist(ft,in);
   }
   catch(Distance::InchesExecp ix)
   {
       cout<<"Value "<<ix.iVlaue<<" assigned to large in "<<""<<endl;
   }
   
}