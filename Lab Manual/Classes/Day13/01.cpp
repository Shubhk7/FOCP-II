#include <iostream>
using namespace std;

class Course
{
    string course, Instructor;
    int Duration;

public:
    Course()
    {
        course = "OOP";
        Instructor = "Lewin";
        Duration = 3;
    }
    Course(string C, string I, int D)
    {
        course = C;
        Instructor = I;
        Duration = D;
    }
    void Display()
    {
        cout << "Course: " << course << "\nInstructor: " << Instructor << "\nDuration: " << Duration << " months" << endl;
        cout << "-----------------------------" << endl;
    }
    ~Course()
    {
        cout << "Course Objects Deleted!" << endl;
    }
};

int main()
{
    Course c1("System Architecture x86-64", "Mosh", 12), c2;
    c1.Display();
    c2.Display();
    return 0;
}