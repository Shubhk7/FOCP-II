// WAP to calculate the area of square and area of circle using function overloading
#include <iostream>
using namespace std;

class areaFig{
    public:

    int ar(int side){
        return side*side;
    }
    double ar(double radius){
        return 3.14*radius*radius;
    }
};

int main(){
    areaFig ob1;
    cout << "Area of square: " << ob1.ar(5) << "\nArea of circle: " << ob1.ar(7.5);    
    return 0;
}