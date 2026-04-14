// Design a C++ program using multilevel inheritance to manage employee salary detail Create a base class Emptoyee that stores employee ID and name, and includes a function to input these details. Derive a class Salary from Employee that stores the base salary and includes a function to input the salary. Further derive a class Bonus from Salary that stores the bonus amount and includes a function to calculate the total salary. The total salary should be calculated as the sum of base salary and bonus. Use only one function in each class, and create an object of the Bonus class to access al the functionalities.
#include <iostream>
using namespace std;

class Employee{
    protected:
    int id;
    string name;
    public:
    void Enter(){
        cout<<"Enter the employee id and name: "<<endl;
        cin>>id>>name;
    }
};
class salary: public Employee{
    protected:
    int base_salary;
    public:
    void EnterSalary(){
        cout<<"Enter the base salary: "<<endl;
        cin>>base_salary;
    }
};
class bonus: public salary{
    public:
        void CalculateTotalSalary(){
        int bonus_amount = base_salary* 0.5;
        int total_salary = base_salary + bonus_amount;
        cout<<"Total Salary: "<<total_salary<<endl;
    }
};
int main(){
    // bonus b(1, "Niki Lauda", 10000, 100000);
    bonus b;
    b.Enter();
    b.EnterSalary();
    b.CalculateTotalSalary();
    return 0;
}