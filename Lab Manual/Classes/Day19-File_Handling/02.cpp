#include <iostream>
using namespace std;

int main()
{
    int choice;
    cin >> choice;
    try
    {
        if (choice == 1)
        {
            throw 100;
        }
        else if(choice == 2)
        {
            throw 5.2;
        }
        else if(choice == 3)
        {
            throw "Invalid choice";
        }
    }
    catch (int x)
    {
        cout << "int exception";
    }
    catch (double x)
    {
        cout << "double exception";
    }
    catch (const char *msg)
    {
        cout << "string exception";
    }
    catch (...)
    {
        cout << "exception occured";
    }
    return 0;
}