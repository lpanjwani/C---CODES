#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

void main()
{
	int n;
	cout << "Enter a number > 0: ";
	cin >> n;
	REDO:
	while (n > 0) {
		cout << "Decremented value is: " << n << endl;
		n = n - 1;
	};
	cout << "Enter a valid number: ";
	cin >> n ;

	goto REDO;

	_getch();
}