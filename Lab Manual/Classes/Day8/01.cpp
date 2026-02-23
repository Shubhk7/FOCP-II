#include <iostream>
#include <string>
using namespace std;

class candy
{
    string color;
    int points;

public:
    void setcandy(string c, int p)
    {
        color = c;
        points = p;
    }
    void displaycandy()
    {
        cout << "Color: " << color << endl;
        cout << "Points: " << points << endl;
    }
};

int main()
{
    candy ob1;
    int a, b;
    ob1.setcandy("Red", 89);
    ob1.displaycandy();
    return 0;
}
// class is also userdefined data type so we can have multiple objects of the same class. In above code we have created an object ob1 of class candy and we can create multiple objects of class candy as per our requirement.