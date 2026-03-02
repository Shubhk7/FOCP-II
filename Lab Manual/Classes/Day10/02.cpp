#include <iostream>
// #include <string>
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
    ob1.setcandy("greeen", 72);
    ob1.displaycandy();
    return 0;
}