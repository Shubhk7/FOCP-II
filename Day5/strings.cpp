#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    // cout << name.length();
    for (int i = 0; i < name.length(); i++)
    {
        cout << name[i] << endl;
    }
    // cout << name;
    return 0;
}