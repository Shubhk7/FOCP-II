// Library Management System
#include <iostream>
using namespace std;

class Library{
    int bookID;
    string bookName, Author;
    bool IsIssued;
    public:
    void addBook(){
        cout << "Enter Book ID: ";
        cin >> bookID;
        cout << "Enter Book Name: ";
        cin >> bookName;
        cout << "Enter "<< bookName<<"'s Author: ";
        cin >> Author;
        cout << "Is "<< bookName<< "Issued? : \n\t1. Yes, It is issued\n\t0. No Book is not issued";
        cin >> IsIssued;
    }
    void DisplayBook(){
        cout << "\n\nBook ID: " << bookID<< "\nBook Name: " << bookName<< "\nAuthor: " << Author<< "\nIs Issued: " << IsIssued;
    }
    void IssueBook(){
        if(IsIssued == 0){
            IsIssued = 1;
            cout << "\n\nBook Issued Successfully!";
        }
        else{
            cout << "\n\nSorry! Book is already issued.";
        }
    }
    void returnBook(){
        if(IsIssued == 1){
            IsIssued = 0;
            cout << "\n\nBook Returned Successfully!";
        }
        else{
            cout << "\n\nSorry! Book is not issued.";
        }
    }
};

int main(){
    Library B1, B2;
    B1.addBook();
    B2.addBook();


    B1.DisplayBook();
    B1.IssueBook();
    B1.DisplayBook();
    B1.returnBook();
    B1.DisplayBook();
    
    B2.DisplayBook();
    B2.IssueBook();
    B2.DisplayBook();
    B2.returnBook();
    B2.DisplayBook();
    
    return 0;
}