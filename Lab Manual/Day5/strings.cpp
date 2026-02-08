#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    // cin >> name;
    getline(cin, name);
    // // cout << name.length();
    // for (int i = 0; i < name.length(); i++)
    // {
    //     cout << name[i] << endl;
    // }
    // cout << name;
    char l = {'a', 'w'};
    cout<< sizeof(l);
    return 0;
}