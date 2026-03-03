#include <iostream>
using namespace std;

class Employee{
    int emp_id;
    long Salary;
    public:
    Employee(int id, long sal){
        emp_id = id;
        Salary = sal;
    }
    void display(){
        cout << "Employee ID: " << emp_id << "\nSalary: " << Salary << endl;
    }
};

int main(){
    Employee E1(101, 50000);
    E1.display();
    return 0;
}