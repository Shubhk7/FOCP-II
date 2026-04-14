//  WAP to print your father's name in base class and initialize it through base class constructor 
// in dervived class print your name and age through derived class constructor
#include <iostream>
using namespace std;

class base{
    string father_name;
    int Age;
    public:
    base(string name, int age){
        father_name = name;
        age = age;
        cout<<father_name<<endl<<age<<endl;
    }
};
class derived :public base{
    string name;
    int age;
    public:
    derived(string father_name, int father_age, string name, int age): base(father_name, father_age){
        name = name;
        age = age;
        cout<<name<<endl<<age<<endl;
    }
};



int main(){
    derived d("LAPTOP-K22BTPU7", 11, "LAPTOP-MQIFDOEF", 2);
    return 0;
}