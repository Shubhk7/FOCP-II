// create a class student which stores name and class as private data mem, and a member function displays details (name and age of students)

#include <iostream>
using namespace std;

class student{
    string name;
    int age;
    public:
    void display(){
        cout<<"Enter the name and age of student: "<<endl;
        cin>>name>>age;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    
    return 0;
}