// WAP to calculate, the area square and area of rectange vai funtion overloading
#include <iostream>
using namespace std;

class AreaFig{
    public:
    double Ar(double side){
        return side*side;
    }
    double Ar(double length, double breadth){
        return length*breadth;
    }
};

int main(){
    AreaFig ob1;
    cout << "Area of square: " << ob1.Ar(5) << "\nArea of rectangle: " << ob1.Ar(5,7);
    return 0;
}