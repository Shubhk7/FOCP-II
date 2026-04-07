// WAP to print 2 numbers 
// the first number shall be initialized by base class constructor, second number shall be initialized by derived class constructor
// parameterized constructor Inheritance
#include <iostream>
using namespace std;

class base{
    int x;
    public:
    base(int x){
        this->x = x;
        cout<<x<<endl;
    }
};

class derived: public base{
    int y;
    public:
    derived(int a, int b): base(a){
        y = b;
        cout<<y<<endl;
    }
};

int main(){
    derived d(5, 10);
    return 0;
}