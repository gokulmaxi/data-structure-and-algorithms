#include <iostream>

using namespace std;

// Base class
class Shape {
public: // can be accessed anywhere
  void setWidth(int w) { width = w; }
  void setHeight(int h) { height = h; }

protected: // accessable by this class and it inherited child
  int width;
  int height;

private: // accessable by only this class
  int area;
};

// Derived class
class Rectangle : public Shape {
public:
 const int getArea() { return (width * height); }
};

int main(void) {
  Rectangle Rect;

  Rect.setWidth(5);
  Rect.setHeight(7);

  // Print the area of the object.
  cout << "Total area: " << Rect.getArea() << endl;

  return 0;
}
