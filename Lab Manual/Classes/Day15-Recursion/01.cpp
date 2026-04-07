/*#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int Fact = factorial(5);
    cout << Fact << endl;
    return 0;
}*/
// print array using recursion
#include <iostream>
using namespace std;

void arrprt(int arr[], int n, int size)
{
    if (n == size)
    {
        return;
    }
    else
    {
        // cout << arr[n] << " ";
        return arrprt(arr, n + 1, size);
        cout << arr[n] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    arrprt(arr, 0, size);
    return 0;
}