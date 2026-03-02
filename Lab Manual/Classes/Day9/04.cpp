// wap a to calculate volume of sphere and hemi-sphere
#include <iostream>
using namespace std;

class VolFig
{
public:
    int volume(int radius)
    {
        return (4 / 3) * 3.14 * (radius * radius * radius);
    }
    double volume(double radius)
    {
        return (4 / 3) * 3.14 * (radius * radius * radius);
    }
    // float volume(float radius)
    // {
    //     return (2 / 3) * 3.14 * (radius * radius * radius);
    // }
};

int main()
{
    VolFig ob1; 
    cout << "volume of sphere: "<<ob1.volume(5);
    cout << "volume of Hemi-sphere: "<<ob1.volume(5.0);
    return 0;
}