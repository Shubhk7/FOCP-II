// Wap to calculate the volume of cone, cuboid, cube using function overloading
#include <iostream>
using namespace std;

class volumefigure
{
public:
    int volume(int side)
    {
        return side * side * side;
    }
    int volume(int length, int breadth, int height)
    {
        return length * breadth * height;
    }
    float volume(float radius, float height)
    {
        return (3.14 * radius * radius * height) / 3;
    }
};

int main()
{
    volumefigure ob1;
    cout << "Cube: " << ob1.volume(5) << "\nCuboid : " << ob1.volume(5,7,8) << "\nCone: " << ob1.volume(35,28);
    return 0;
}