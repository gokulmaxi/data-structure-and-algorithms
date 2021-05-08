#include <stdio.h>
template <class T>
class Arithemetic
{
private:
    T a;
    T b;

public:
    Arithemetic(T a, T b);
    T add();
    T sub();
    ~Arithemetic();
};
template <class T>
Arithemetic<T>::Arithemetic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template <class T>
T Arithemetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}
template <class T>
T Arithemetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}
template <class T>
Arithemetic<T>::~Arithemetic()
{
}

int main(int argc, char const *argv[])
{
    Arithemetic<int> arInt(10, 11);
    Arithemetic<float> arFloat(11.51,10.5);
    printf("add int %d \n" , arInt.add());
    printf("add float %f",arFloat.add());
    return 0;
}
