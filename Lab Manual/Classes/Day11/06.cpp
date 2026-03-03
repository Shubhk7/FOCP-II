#include <iostream>
using namespace std;

class Bank_Account{
    string Account_Number;
    long Initial_Balance;
    public:
    Bank_Account(string AN, long IB){
        Account_Number = AN;
        Initial_Balance = IB;
    }
    Bank_Account(){
        Account_Number = "123542365";
        Initial_Balance = 0;
    }
    void display(){
        cout << "Account Number: " << Account_Number << "\nInitial Balance: " << Initial_Balance << endl;
    }
};

int main(){
    Bank_Account B1("987654321", 100000);
    B1.display();
    cout << "\n\n";
    Bank_Account B2;
    B2.display();
    return 0;
}