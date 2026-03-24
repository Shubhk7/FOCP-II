// create a class animal which contains a function eats()
// create a class dog which inherits the animal class and contains  function barks()
// create an object of derived class which is able to access eats() and barks() functions
#include <iostream>
using namespace std;

class Animal
{
public:
    void eats()
    {
        cout << "Animal eats" << endl;
    }
};
// create a class lion and create a function roar() in it
// create object of lion class and and access the base class methods
class Lion : public Animal
{
public:
    void roar()
    {
        cout << "Lion roars" << endl;
    }
};

class dog : public Animal
{
public:
    void barks()
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    dog d;
    d.eats();
    d.barks();

    Lion l;
    l.eats();
    l.roar();

    return 0;
}