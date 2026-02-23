#include <iostream>
using namespace std;;
class BkAc{
    int AccountNumber;
    string AccountHolder;
    float Balance = 0.00;
    public:
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> AccountNumber;
        cout << "Enter Account Holder name: ";
        cin >> AccountHolder;
        cout << "Enter Balance: ";
        cin >> Balance;
        // Balance = 0;
    }
    void deposit(float Amt){
        Balance += Amt;
        cout<<"\nBalance after Deposit: "<< Balance;
    }
    void withdraw(float Amt){
        Balance -= Amt;
        cout<<"\nBalance after Withdrawal: "<< Balance;
    }
    void DisplayDetails(){
        cout << "\n\nA/C Number: " << AccountNumber<< "\nAccount Holder Name: " << AccountHolder<< "\n Balance: " << Balance;
    }
};

int main(){
    BkAc holder1;
    holder1.createAccount();
    holder1.deposit(5000);
    holder1.withdraw(7000);
    holder1.DisplayDetails();
    return 0;
}