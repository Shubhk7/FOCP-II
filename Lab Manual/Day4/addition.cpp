#include <iostream>
using namespace std;

class add
{
    int num1, num2;
    int sum;

public:
    void getData()
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    void sumation()
    {
        sum = num1 + num2;
        cout << "Sum is: " << sum;
    }
};

int main()
{
    add o1;
    o1.getData();
    o1.sumation();
    return 0;
}