#include <iostream>
using namespace std;

class Mobile
{
    string brand;
    double price;
    int RAM;
public:
    Mobile()
    {
        brand = "Generic";
        price = 5000;
        RAM = 32;
    }
    Mobile(string b, double p)
    {
        brand = b;
        price = p;
        RAM = 8;
    }
    Mobile(double p, int s)
    {
        brand = "Something";
        price = p;
        RAM = s;
    }
    void Display(){
        cout << "Brand: " << brand << "\nPrice: " << price << "\nStorage: " << RAM << "GB" << endl;
        cout << "-----------------------------" << endl;
    }
};
int main(){
    Mobile m1, m2("Apple", 100000), m3(50000, 128);
    m1.Display();
    m2.Display();
    m3.Display();
    return 0;
}