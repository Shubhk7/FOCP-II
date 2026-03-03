#include <iostream>
using namespace std;

class Book{
    string Title;
    int price;
    public:
    Book(string T, int p){
        Title = T;
        price = p;
    }
    Book(){
        Title = "NULL";
        price = NULL;
    }
    void display(){
        cout << "Title: " << Title << "\nPrice: " << price << endl;
    }
};

int main(){
    Book B1 ("The Alchemist", 500);
    B1.display();
    cout << "\n\n";
    Book B2;
    B2.display();
    return 0;
}