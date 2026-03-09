#include <iostream>
using namespace std;

class Product
{
    string Product_name;
    double price;
    int Quantity;

public:
    Product()
    {
        Product_name = "Something";
        price = 15;
        Quantity = 1;
    }
    Product(string P, double pr, int Q)
    {
        Product_name = P;
        price = pr;
        Quantity = Q;
    }

    void calc_bill()
    {
        cout << "Total Bill: Rs." << price * Quantity << endl;
    }
    ~Product()
    {
        cout <<"\n\nDestructor Called" << endl;
    }
};

int main()
{
    Product P1, P2("DDR5 6400MHz 64GB RAM", 50000, 2);
    P1.calc_bill();
    P2.calc_bill();
    return 0;
}