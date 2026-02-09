// wap to add 2 nums using func and class and object
#include <iostream>
using namespace std;

class Add
{
    int a, b;
    public:
    void data()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    int sum()
    {
        return a + b;
    }
};

int main(){
    Add obj;
    obj.data();
    cout << "Sum = " << obj.sum();
    return 0;
}