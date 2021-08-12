#include<iostream>
#include <ostream>
using namespace std;
int weakFunction() __attribute__((weak));
int weakFunction(){
        cout<<"Function weak"<<endl;
        return 0;
}
int main(int argc, const char** argv) {
 
        return 0;
}
