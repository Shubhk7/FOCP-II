// wap to create a class student with data members name and marks
// use a constructor to initialize the values and display the students details using a member function
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
    void display()
    {
        cout << "Name: " << name << "\nMarks: " << marks;
    }
};

int main()
{
    Student S1;
    S1.display();
    return 0;
}