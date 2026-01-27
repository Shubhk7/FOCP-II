//A teacher wants to calculate the average marks of three students to determine the class performance. 
// Implement a solution to accept three numbers and compute their average. 
#include <iostream>
using namespace std;

class Average{
    int n1, n2, n3;
    public:
    void data(){
        cout << "Enter the Numbers";
        cin >> n1 >> n2 >> n3;
    }
    void average(){
        cout << (n1+n2+n3)/3;
    }
};


int main(){
    Average student1;
    student1.data();
    student1.average();
    return 0;
}