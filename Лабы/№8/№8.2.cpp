#include "pch.h"
#include <iostream>
#include "№5.1.cpp"
#include <list>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	list<Complex> com;
	int n;
	cout << "Количество номеров: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		double re, img;
		cout << "Введите действительную и мнимую часть: ";
		cin >> re >> img;
		Complex complex(re, img);
		com.push_back(complex);
	}
	system("pause");
	return 0;
}