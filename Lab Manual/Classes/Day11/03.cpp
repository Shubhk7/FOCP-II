#include <iostream>
using namespace std;

class Car{
    string brand;
    long long price;
    public: 
    Car(string b, long long p){
        brand = b;
        price = p;
    }
    void Display()
    {
        cout << "Brand: " << brand << "\nPrice: " << price<< endl;
    }
};

int main(){
    Car c1("Toyota", 2000000);
    c1.Display();
    Car C2("BMW M4 MT", 6500000);
    C2.Display();
    return 0;
}