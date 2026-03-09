#include <iostream>
using namespace std;

class Electricity_bill
{
    int unit;
    double rate, Fixed_charge;

public:
    void calculateBill(int unit)
    {
        cout << "Amount to be paid: Rs." << unit * 5 << endl;
        // return unit * rate;
    }
    void calculateBill(int unit, double rates)
    {
        cout << "Amount to be paid: Rs." << unit * rates << endl;
        // return unit * rate;
    }
    void calculateBill(int unit, double rates, double fixed_charge)
    {
        cout << "Amount to be paid: Rs." << (unit * rates) + fixed_charge << endl;
        // return unit * rate + fixed_charge;
    }
};

int main()
{
    Electricity_bill eb1;
    Electricity_bill eb2;
    Electricity_bill eb3;

    eb1.calculateBill(100);
    eb2.calculateBill(100, 10);
    eb3.calculateBill(100, 11, 50);

    return 0;
}