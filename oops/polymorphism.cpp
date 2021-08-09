#include <iostream>
#include <ostream>
using namespace std;
class Batsman {
protected: // can be accessed only by base class and its inherited class
  int runs;

public:
  void setRuns(int run) { runs = run; }
  virtual void specialShot() { // remove compiler time function assingment 
    cout << "special shot" << endl; // prints the special shot
  }
};
class Dhoni : public Batsman {
public:
  void printRuns() { cout << "dhoni scored " << runs << endl; }
  void specialShot() {
    cout << "Helicopter shot" << endl; // prints the special shot of dhoni
  }
};
class Kholi : public Batsman {
public:
  void printRuns() { cout << "dhoni scored " << runs << endl; }
  void specialShot() {
    cout << "Cover drive " << endl; // prints the special shot of kholi
  }
};
int main(int argc, const char **argv) {
  Dhoni dhoni;
  Kholi kholi;
  Batsman *batsman1 = &dhoni; // store address of inherited child to parent
  Batsman *batsman2 = &kholi; // same as above
  batsman1->specialShot();   // prints special shot due to static linkage 

  return 0;
}
