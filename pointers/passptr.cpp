#include <iostream>

using namespace std;
void mmtocentConvert(double *); //prototype
int main()
{
    double var;
    cout<<"enter the length in mm:";
    cin>>var;
    mmtocentConvert(&var);
    cout << var << endl;
}

void mmtocentConvert(double *mm)
{
    *mm = *mm / 100;
}