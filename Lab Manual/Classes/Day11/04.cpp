#include <iostream>
using namespace std;

class Rectangle{
    long Length, Breadth;
    public:
    Rectangle (long L, long B)
    {
        Length = L;
        Breadth = B;
    }
    void calc(){
        cout << "Area: " << Length*Breadth << endl;
    }
};

int main(){
    Rectangle R1(60, 28);
    R1.calc();
    return 0;
}