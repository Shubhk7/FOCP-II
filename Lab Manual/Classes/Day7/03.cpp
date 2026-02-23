#include <iostream>
using namespace std;

class fibonacci{
    int* arrint[];
    float* arrfloat[];
    public:
    void fibo(int n){
        int a = 0, b = 1, c;
        cout << "Fibonacci series: ";
        for(int i = 1; i <= n; i++){
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }
    }
    int fiboint(int n){
        int a = 0, b = 1, c;
        arrint = new int[n];
        for(int i = 1; i <= n; i++){
            c = a + b;
            a = b;
            b = c;
            arrint[i-1] = c;
        }
        return a;
    }
    float fibofloat(int n){
        float a = 0, b = 1, c;
        arrfloat = new float[n];
        for(int i = 1; i <= n; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return ;
    }
};

int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    fibonacci ob1;
    ob1.fibo(n);
    cout << "\nThe " << n << "th term in the Fibonacci series (integer) is: " << ob1.fiboint(n) << endl;
    cout << "The " << n << "th term in the Fibonacci series (float) is: " << ob1.fibofloat(n) << endl;

    return 0;
}