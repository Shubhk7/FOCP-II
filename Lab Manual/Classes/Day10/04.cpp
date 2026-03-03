#include <iostream>
using namespace std;

// class volume
// {
// public:
//     int vol(int S)
//     {
//         return S * S * S;
//     }
//     int vol(int L, int B, int H)
//     {
//         return L * B * H;
//     }
//     float vol(float r, float h)
//     {
//         return (3.14 * r * r * h);
//     }
// };

int vol(int S)
{
    return S * S * S;
}
int vol(int L, int B, int H)
{
    return L * B * H;
}
float vol(float r, float h)
{
    return (3.14 * r * r * h);
}

int main()
{
    // volume ob1;
    // cout << "Volume of cube: " << ob1.vol(5) << "\n";
    // cout << "Volume of cuboid: " << ob1.vol(5, 7, 8) << "\n";
    // cout << "Volume of Cylinder: " << ob1.vol(35, 28);
    cout << "Volume of cube: " << vol(5) << "\n";
    cout << "Volume of cuboid: " << vol(5, 7, 8) << "\n";
    cout << "Volume of Cylinder: " << vol(35, 28);
    return 0;
}