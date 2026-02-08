#include <iostream>
#include <string>
using namespace std;
int main()
{
    int z = 0, o = 0;
    char Z[50], O[100];
    // cin >> num;    //Reading input from STDIN
    string name;
    cin >> name;

    if (name.length() <= 20)
    {
        for (int i = 0; i < name.length(); i++)
        {
            if (name[i] == 'Z' || name[i] == 'z')
            {
                Z[z] = name[i];
                z++;
            }
            else if (name[i] == 'O' || name[i] == 'o')
            {
                O[o] = name[i];
                o++;
            }
            else
            {
                cout << "Invalid Input Detected";
                break;
            }
        }
        if ((o - 1) == 2 * (z - 1))
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
    else
    {
        cout << "Memory Exceeded";
    }
}