// WAP to demonstrate the useage of constructors in single inheritance.
#include <iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base class constructor called"<<endl;
    }
};
class Derived: public Base{
    public:
    Derived(){
        cout<<"Derived class constructor called";
    }};

int main(){
    Derived d;
    return 0;
}