// ConsoleApplication40.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char a[100];
	setlocale(LC_ALL, "RUS");
	cout << "Введите свое имя на английском языке:" << endl;
	cin >> a;
	cout << "Добрый день, " << a << endl;

}