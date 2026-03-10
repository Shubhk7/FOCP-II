#include <iostream>
using namespace std;

class Mobile
{
    string brand;
    double price;
    int RAM;

public:
    // Laptop()
    // {
    //     brand = "HP";
    //     price = 105999;
    //     RAM = 32;
    // }
    // Laptop(string b, double p)
    // {
    //     brand = b;
    //     price = p;
    //     RAM = 16;
    // }
    // Laptop(double p, int s)
    // {
    //     brand = "Dell";
    //     price = p;
    //     RAM = s;
    // }
    void setDetails(string b)
    {
        brand = b;
        price = 105999;
        RAM = 16;
    }
    void setDetails(string b, int Ram)
    {
        brand = b;
        RAM = Ram;
        price = 150999;
    }
    void setDetails(string b, double p, int Ram)
    {
        brand = b;
        price = p;
        RAM = Ram;
    }
    void Display()
    {
        cout << "Brand: " << brand << "\nRam: " << RAM << "GB" << "\nPrice: " << price << endl;
        cout << "-----------------------------" << endl;
    }
};
int main()
{
    Mobile L1, L2, L3;
    
    L1.setDetails("HP");
    L2.setDetails("Apple", 16);
    L3.setDetails("Dell", 150759, 32);

    L1.Display();
    L2.Display();
    L3.Display();
    return 0;
}