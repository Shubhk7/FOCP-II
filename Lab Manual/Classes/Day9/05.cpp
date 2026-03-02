// wap to add 
// 2int varables
// 1st is int and 2nd is decimal numbers
// 1st is decimal and 2nd is integer
// both the numbers are decimal
#include <iostream>
using namespace std;

class Add{
    public:
    int add(int num1, int num2){
        return num1+num2;
    }
    double add(int num1, double num2){
        return num1 + num2;
    }
    double add(double num1, int num2){
        return num1 + num2;
    }
    double add(double num1, double num2){
        return num1 + num2;
    }
};

int main(){
    Add Ob1;
    cout<< "\nint and int: "<<Ob1.add(5, 6);
    cout<< "\nint and Decimal: "<<Ob1.add(5, 6.0);
    cout<< "\nDecimal and int: "<<Ob1.add(5.0, 6);
    cout<< "\nDecimal and Decimal: "<<Ob1.add(5.0, 6.0);

    return 0;
}