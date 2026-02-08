//  An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute 
// the area of a circle.

#include <iostream>
using namespace std;
class area{
    int radius;
    public:
    void data(){
        cout << "Enter the radius: ";
        cin >> radius;
    }
    void area_circle(){
        cout << "Area of Circle: " << 3.14 * radius * radius;
    }
};

int main(){
    area object1;
    object1.data();
    object1.area_circle();
    return 0;
}