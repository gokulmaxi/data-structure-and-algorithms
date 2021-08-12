#include <iostream>
using namespace std;
void swap(int *x, int *y);
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void add(int *x, int *y)
{
    *x = *x + 10;
    *y = *y + 20;
}
int main()
{
    int x, y;
    cout << "enter x" << endl;
    cin >> x;
    cout << "enter y" << endl;
    cin >> y;
    void (*p)(int *, int *) = swap;
    p(&x, &y);
    
    p = &add;
    p(&x, &y);

    cout << "x=" << x << " y=" << y << endl;
    return 0;
}