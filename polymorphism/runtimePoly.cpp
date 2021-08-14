#include <iostream>
using namespace std;
  
class Base1 {
public:
    virtual void funct1()
    {
        cout << "Base1::funct1() is called\n";
    }
    virtual void funct2(int x)
    {
        cout << "Base1's Val of x:" << x << endl;
    }
  
    // Non-Virtual Function
    void funct3()
    {
        cout << "Base1 is the Parent class!"
             << endl;
    }
};
  
class Base2 : public Base1 {
private:
    void funct1()
    {
        cout << "Base2::funct1() is called\n";
    }
    void funct2(int x)
    {
        cout << "Base2's Val of x:"
             << x << endl;
    }
    void funct3()
    {
        cout << "Base2 is the first"
             << " Derived class!" << endl;
    }
};
  
class Base3 : public Base1 {
private:
    void funct1()
    {
        cout << "Base3::funct1() is called\n";
    }
    void funct2(int x)
    {
        cout << "Base3's Val of x:"
             << x << endl;
    }
    void funct3()
    {
        cout << "Class Base3 is second"
             << " Derived class!" << endl;
    }
};
  
// Grand-Child_1 of Base1 class
class Derived1 : public Base3 {
private:
    void funct1()
    {
        cout << "Derived1::funct1() is called\n";
    }
    void funct2(int x)
    {
        cout << "Derived1 Class's Val of x:"
             << x << endl;
    }
    void funct3()
    {
        cout << "Class Derived1 is Good!!"
             << endl;
    }
};
  
// Grand-Child_2 of Base1 class
class Derived2 : public Base3 {
private:
    void funct1()
    {
        cout << "Derived2::funct1()"
             << " is called\n";
    }
    void funct2(int x)
    {
        cout << "Derived2 Class's Val "
             << "of x:" << x << endl;
    }
    void funct3()
    {
        cout << "Class Derived2 is Good!!"
             << endl;
    }
};
  
// Run-Time Polymorphism
// in Hierarchical Inheritance
int main()
{
  
    // Base1 class's(Parent class's)
    // pointer points to Derived1 class
    Base1* b1ptr = new Derived1();
  
    // Run-Time Polymorphism
    b1ptr->funct1();
    Derived2 d2;
  
    // Now the Base1 class pointer
    // points to d2 object(Derived2 class)
    b1ptr = &d2;
  
    // Run-Time Polymorphism
    b1ptr->funct2(30);
  
    // Compile-Time Binding
    b1ptr->funct3();
  
    return 0;
}