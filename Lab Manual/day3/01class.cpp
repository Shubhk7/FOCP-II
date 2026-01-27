#include <iostream>
using namespace std;

class add
{
    int n1, n2;

public:
    void getData();
    void Display();
};

void getData ::add()
{
    cout << "Enter numbers: ";

    cin >> n1 >> n2;
}
void Display ::add()
{
    cout << n1 + n2;
}
int main()
{
    add o1;
    o1.getData;
    ai.Display;
    return 0;
}