#include <iostream>
using namespace std;

int main()
{
    int Armor[2][2], temp[2][2];
    cout << "Enter Current Armor inventory:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> Armor[i][j];
        }
    }

    cout << "Armor Reward Earned are:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> temp[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "|";
        for (int j = 0; j < 2; j++)
        {
            cout << Armor[i][j] << " ";
        }
        cout << "|" << endl;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            Armor[i][j] = Armor[i][j] + temp[i][j];
        }
    }

    cout << "\n\nUpdated Armor inventory is:\n";
    for (int i = 0; i < 2; i++)
    {
        cout << "|";
        for (int j = 0; j < 2; j++)
        {
            cout << Armor[i][j] << " ";
        }
        cout << "|" << endl;
    }

    return 0;
}