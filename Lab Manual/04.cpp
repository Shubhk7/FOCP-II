// wap to convert temp from F to C
#include <iostream>
using namespace std;

int main(){
    float F = 0, C;
    cout << "Enter Temp in Fahrenheit: ";
    cin >> F;
    C = (5.0/9.0)*(F - 32.0);
    cout << "\nTemp in C :"<< C;
    return 0;
}