#include <iostream>
using namespace Std;
int main() {
	int num, fact = 1;
	cin >> num;
	for (int i = num; i >= 1; i--)
	{
		fact *= i;
	}
	cout << fact;
	return 0;
}