// wap to check if an indian citizen is eligible to vote or not (age>=18) using class and object.
#include <iostream>
using namespace std;

class Eligibility{
    int age;
    public:
      void dataAq(){
        cout << "Enter your age: ";
        cin >> age;
      }
      void Result(){
        if (age >= 18){
            cout << "Eligible";
        }
        else{
            cout << "Not Eligible";
        }
      }
    };
int main(){
    Eligibility e1;
    e1.dataAq();
    e1.Result();
    return 0;
}