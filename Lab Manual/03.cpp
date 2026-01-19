// WAP to add subtract multiply and divide two numbers using functions.
#include <iostream>
using namespace std;
// int add(int a, int b)
// {
//     return a + b;
// }
// int sub(int a, int b)
// {
//     return a - b;
// }
// int mul(int a, int b)
// {
//     return a * b;
// }
// int divi(int a, int b)
// {
//     return a / b;
// }

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    // cout << "Addition: " << add(num1, num2) << "\n";
    // cout << "Subtraction: " << sub(num1, num2) << "\n";
    // cout << "Multiplication: " << mul(num1, num2) << "\n";
    // cout << "Division: " << divi(num1, num2) << "\n";

    cout << "Addition: " << num1 + num2 << "\n";
    cout << "Subtraction: " << num1 - num2 << "\n";
    cout << "Multiplication: " << num1 * num2 << "\n";
    cout << "Division: " << num1 / num2 << "\n";
    return 0;
}