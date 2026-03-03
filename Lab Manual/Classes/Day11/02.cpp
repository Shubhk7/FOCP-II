// create another constructor which takes 2 parameters and initializes the data members
#include <iostream>
using namespace std;

class Student
{
    string name;
    int marks;

public:
    Student()
    {
        name = "Rahul";
        marks = 81;
    }
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    void display()
    {
        cout << "Name: " << name << "\nMarks: " << marks;
    }
};

int main()
{
    Student S1;
    S1.display();
    cout<<"\n\n";
    Student S2("DDR5 6400MHz RAM", 85);
    S2.display();
    return 0;
}
