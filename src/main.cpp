#include <iostream>
#include <math.h>
#include "complex.h"

using namespace std;
Complex y(double);

int main()
{
	setlocale(LC_ALL, "RUS");
	Complex x(10, -5);
	Complex y = 3;
	Complex z;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << endl;
	z = x + y;
	x /= z;
	y *= z;
	cout << "z = x + y = " << z << endl;
	cout << "x = x / z = " << x << endl;
	cout << "y = y * z = " << y << endl;
	cout << endl;
	cout << "¬ведите Re и Im:" << endl;
	cin >> z;
	cout << "z = " << z << endl;
	system("pause");
}
Complex y(double z)
{
	return Complex(2, 3 * exp(-z));
}
