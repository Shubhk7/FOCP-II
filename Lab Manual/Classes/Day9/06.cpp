// wap to print whether you are a student, a friend, sibling or a cousin
/*you are a friend if you multiply 3 integer numbers
you are a student if you multiply 3 decimal point numbers
you are a sibling if you multiply 2 decimal point and 1 integers numbers
you are a cousin if you multiply 1 decimal point and 2 integers numbers
*/
#include <iostream>
using namespace std;

class relation
{
public:
    int rel(int a, int b, int c)
    {
        cout << "You're a Friend\n";
        return 0;
    }
    double rel(double a, double b, double c)
    {
        cout << "You're a Student\n";
        return 0;
    }
    double rel(double a, double b, int c)
    {
        cout << "You're a Sibling\n";
        return 0;
    }
    double rel(int a, int b, double c)
    {
        cout << "You're a Cousin\n";
        return 0;
    }
};

int main()
{
    relation ob1;
    ob1.rel(5, 5, 5);
    ob1.rel(5.0, 5.0, 5.0);
    ob1.rel(5.2, 5.2, 5);
    ob1.rel(5, 5, 5.3);

    // cout << " Relation is : " << ob1.rel(5, 5, 5);
    // cout << " Relation is : " << ob1.rel(5.0, 5.0, 5.0);
    // cout << " Relation is : " << ob1.rel(5.2, 5.2, 5);
    // cout << " Relation is : " << ob1.rel(5, 5, 5.3);
    return 0;
}