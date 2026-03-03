#include <iostream>
using namespace std;

class tables
{
    int price, legs;
    string material;

public:
    tables()
    {
        price = 5000;
        material = "Wood";
    }
    tables(int p)
    {
        price = p;
        material = "Wood";
    }
    tables(int p, string m, int l)
    {
        price = p;
        material = m;
        legs = l;
    }
    void display()
    {
        cout << "Price: " << price << "\nMaterial: " << material << "\nNumber of Legs: " << legs << endl;
    }
};

int main()
{
    tables t1;
    t1.display();
    cout << "\n\n";
    tables t2(10000);
    t2.display();
    cout << "\n\n";
    tables t3(15000, "Steel", 4);
    t3.display();
    return 0;
}