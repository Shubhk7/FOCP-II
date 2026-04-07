// Create a class students with the following data members: Sname, age, rollno. create 2 functions :  enter and display. create a class sports which contains the following data members: sportname, score. create 2 functions : enter and display. enter takes the input and display displays the data. create a class result which inherits both students and sports class and contains a function displayresult() which displays the result of the student in the sport.4
// create a class test derived from students class and contains data members marks1, marks2, marks3. create a function displaymarks() which displays the marks of the student in 3 subjects. create a class finalresult
// create 2 functions, calculate average and displayaverage marks. calculATE average funtions takes the input from from the uses and then calculates the average marks
// in the main function, create an object of child class and access the functions of all the classes.
#include <iostream>
using namespace std;

class students
{
    public:
    string Sname;
    int age;
    int rollno;
    void enter()
    {
        cout << "Enter student name: ";
        cin >> Sname;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter roll number: ";
        cin >> rollno;
    }
    void display()
    {
        cout << "Student name: " << Sname << endl;
        cout << "Age: " << age << endl;
        cout << "Roll number: " << rollno << endl;
    }
};

class test : public students
{
    public:
    int marks1, marks2, marks3;
    void CalculateAverage()
    {
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
        cout << "Enter marks for subject 3: ";
        cin >> marks3;
    }
     void displayaverage()
    {
        float average = (marks1 + marks2 + marks3) / 3.0;
        cout << "Average marks: " << average << endl;
    }
};

int main(){
    test t;
    t.enter();
    t.CalculateAverage();
    cout<< "\n\n";
    t.display();
    t.displayaverage();
    
    return 0;
}