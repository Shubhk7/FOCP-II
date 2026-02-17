// wap to add 2 numbersby using all the types of functions that we have discussed and classes and objects

#include <iostream>
using namespace std;

class Add
{
    int a, b;
    float A, B;

public:
    float floatop()
    {
        cout << "Enter two float numbers: ";
        cin >> A >> B;
        // cout << "Sum of the two float numbers: " << A+B;
        return A + B;
    }
    int intop()
    {
        cout << "Enter two integer numbers: ";
        cin >> a >> b;
        // cout << "Sum of the two integer numbers: " << a+b;
        return a + b;
    }
    void Op()
    {
        cout << "\tEnter two float numbers: ";
        cin >> A >> B;
        cout << "\t\tSum of the two float numbers: " << A + B;

        cout << "\tEnter two integer numbers: ";
        cin >> a >> b;
        cout << "\t\tSum of the two integer numbers: " << a + b;
    }
};

int main()
{
    Add ob1;
    cout << "Sum of the two float numbers: " << ob1.floatop() << endl;
    cout << "Sum of the two integer numbers: " << ob1.intop() << endl;
    cout << "\n\nUsing void function: " << endl;
    ob1.Op();

    return 0;
}