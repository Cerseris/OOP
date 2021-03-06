#include "pch.h"
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float n, m;
	float a = 4.8;
	float b = -7.9;
	if (a >= b) {
		n = pow(a - b, 1.0 / 3);
	}
	if (a < b) {
		n = a * a + (a - b) / sin(a*b);
	}
	if (n == b) {
		m = n * n + tan(n*a);
	}
	if (n > b) {
		m = b * b * b + n * a * a;
	}
	if (n < b) {
		m = ((n + a) / -b) + sqrt(sin(a)*sin(a) - cos(n));
	}
	cout << "Число a равно:" << a << endl;
	cout << "Число b равно:" << b << endl;
	cout << "Число m равно:" << m << endl;
	cout << "Число n равно:" << n << endl;
}