#include "pch.h"
#include "№6.1.cpp"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	vector<Student> vec1;
	cout << "Введите количество учеников: ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string imya, familiya, gruppa;
		int vozrast;
		cout << "Введите своё имя, фамилию, возраст и группу: ";
		cin >> imya >> familiya >> vozrast >> gruppa;
		Student student(imya, familiya, vozrast, gruppa);
		vec1.push_back(student);
	};
	system("pause");
	return 0;
}