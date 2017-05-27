#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	int NUM, A, B, C, D, E, F, G;

	cout << "Enter 4 Digit Number:";
	cin >> NUM;
	cout << endl;

	A = NUM / 1000;
	B = A;
	C = NUM % 1000;
	D = C / 100;
	E = NUM % 100;
	F = E / 10;
	G = NUM % 10;

	cout << "Your First Number: " << B << endl;
	cout << "Your Second Number: " << D << endl;
	cout << "Your Third Number: " << F << endl;
	cout << "Your Fourth Number: " << G << endl;
	cout << endl << endl;
	cout << "Press any Key to Exit";
	_getch();
}