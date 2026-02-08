// A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase. 
// Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount. 
#include <iostream>
using namespace std;

class BillCalculator{
    int Item_no, Quantity;
    float Unit_price;
    public:
    void getData(){
        cout << "Enter Item Number: ";
        cin >> Item_no;
        cout << "Enter Quantity: ";
        cin >> Quantity;
        cout << "Enter Unit Price: ";
        cin >> Unit_price;
    }
    void calculateBill(){
        float total_price = Unit_price * Quantity;
        float Discount = 0.2 * total_price;
        cout << "Price After 20 percent discount on Total price is: " << total_price - Discount;
    }
};

int main(){
    BillCalculator b1;
    b1.getData();
    b1.calculateBill();

    return 0;
}