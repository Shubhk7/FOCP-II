//  WAP to print your father's name in base class and initialize it through base class constructor 
// in dervived class print your name and age through derived class constructor
#include <iostream>
using namespace std;

class base{
    string father_name;
    public:
    base(string name){
        father_name = name;
        cout<<father_name<<endl;
    }
};
class derived :public base{
    string name;
    int age;
    public:
    derived(string father_name, string name, int age): base(father_name){
        name = name;
        age = age;
        cout<<name<<" "<<age<<endl;
    }
};



int main(){
    derived d("LAPTOP-K22BTPU7", "LAPTOP-MQIFDOEF", 2);
    return 0;
}