// ConsoleApplication48.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct Gruppa {
	int kolichestvo;
	string starosta;
	int kolichestvo_otl;
	int kolichestvo_hor;
	int kolichestvo_ud;
	int sdali;
	int ne_sdali;

	void gruuppa() {
		cout << "Kolichestvo chelovek v gruppe: " << kolichestvo << endl;
		cout << "Starosta: " << starosta << endl;
		cout << "Kolichestvo otlichnikov: " << kolichestvo_otl << endl;
		cout << "Kolichestvo horoshistov: " << kolichestvo_hor << endl;
		cout << "Kolichestvo obichnih: " << kolichestvo_ud << endl;
		cout << "Sdali sessiu: " << sdali << endl;
		cout << "Ne sdali sessiu: " << ne_sdali << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");
	Gruppa inbo0318 = { 30, "Яровиков Анатолий", 3, 4, 23, 25, 0 };
	inbo0318.gruuppa();
	system("pause");
	return 0;
}
