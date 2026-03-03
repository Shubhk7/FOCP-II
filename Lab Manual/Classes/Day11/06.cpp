#include <iostream>
using namespace std;

class Bank_Account{
    int Account_Number;
    long Initial_Balance;
    public:
    Bank_Account(int AN, long IB){
        Account_Number = AN;
        Initial_Balance = IB;
    }
    Bank_Account(long IB){
        Account_Number = 123542365;
        Initial_Balance = IB;
    }
    void display(){
        cout << "Account Number: " << Account_Number << "\nInitial Balance: " << Initial_Balance << endl;
    }
};

int main(){
    Bank_Account B1(500000);
    B1.display();
    return 0;
}