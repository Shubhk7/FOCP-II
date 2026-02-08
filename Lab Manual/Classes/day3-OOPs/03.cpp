//  A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to
// convert Fahrenheit temperature into Centigrade or vice versa.
#include <iostream>
using namespace std;

class temp
{
    float temperature;
    int scale;

public:
    void getData()
    {
        cout << "Choose\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n";
        cin >> scale;
        cout << "Enter the temperature: ";
        cin >> temperature;
    }
    void convert()
    {
        if (scale == 1)
        {
            float fahrenheit = (temperature * 9 / 5) + 32;
            cout << "Temperature in Fahrenheit: " << fahrenheit;
        }
        else if (scale == 2)
        {
            float celsius = (temperature - 32) * 5 / 9;
            cout << "Temperature in Celsius: " << celsius;
        }
    }
};

int main()
{
    temp object1;
    object1.getData();
    object1.convert();

    return 0;
}