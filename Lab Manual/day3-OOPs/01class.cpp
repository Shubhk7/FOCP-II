#include <iostream>
using namespace std;

class add
{
    public:
    int n1, n2;
    void getData();
    void Display();
};

void add ::getData()
{
    cout << "Enter numbers: ";
    cin >> n1 >> n2;
}
void add ::Display()
{
    cout << n1 + n2;
}
int main()
{
    add o1;
    o1.getData();
    o1.Display();
    o1.n1 = 20; // Direct Accessing of class member
    return 0;
}