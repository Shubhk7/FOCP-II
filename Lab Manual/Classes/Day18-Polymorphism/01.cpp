#include <iostream>
using namespace std;

class Base {
    public: 
    virtual void show()//when we use virtual keyword in base class, the base pointer will always call the derived class method even if it is pointing to derived class object.
    {
        cout<< "you're in base class;" << endl;
    }
};
class derived : public Base {
    public:
    void show()
    {
        cout<< "you're in derived class;" << endl;
    }
};

int main(){
    Base *B;// base pointer is holding the address of derived class object but it is calling the base class function because the show function is not declared as virtual in the base class. To achieve runtime polymorphism, we need to declare the show function as virtual in the base class.
    derived d; 
    B = &d;
    B->show();   
    return 0;
}