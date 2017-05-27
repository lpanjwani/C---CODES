#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n, i, x;
	x = 1;
	i = 2;
	while (x <= 10) {
		cout << "Enter a positive integer: ";
		cin >> n;

		if (n % i == 0 && i <= n / 2) {
			cout << "This is a NOT prime number" << endl;
			x = x + 1;
		}
		else {
			cout << "This is a prime number"<< endl;
			x = x + 1;
		}
	}
	_getch();
}