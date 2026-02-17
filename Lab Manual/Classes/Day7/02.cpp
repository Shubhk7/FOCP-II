// wap to find the largest among 3 numbers by using all these function types
#include <iostream>
using namespace std;

class largest
{
public:
    int largestint(int a, int b, int c)
    {
        if (a > b && a > c)
            return a;
        else if (b > a && b > c)
            return b;
        else
            return c;
    }
    float largestfloat(float a, float b, float c)
    {
        if (a > b && a > c)
            return a;
        else if (b > a && b > c)
            return b;
        else
            return c;
    }
    void largest_num(int a, int b, int c){
        if (a> b && a>c)
            cout << "Largest number is: " << a;
        else if (b>a && b>c)
            cout << "Largest number is: " << b;
        else
            cout << "Largest number is: " << c;
    }
};

int main()
{
    int a, b, c;
    float fa, fb, fc;
    cout << "Enter 3 integer numbers: ";
    cin >> a >> b >> c;
    cout << "Enter 3 float numbers: ";
    cin >> fa >> fb >> fc;
    largest ob1;
    cout << "Largest integer is: " << ob1.largestint(a, b, c) << endl;
    cout << "Largest float is: " << ob1.largestfloat(fa, fb, fc) << endl;
    ob1.largest_num(a, b, c);
    return 0;
}