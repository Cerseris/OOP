#include "pch.h"
#include "Complex.h"

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Russian");
	int answer = 0;
	bool exit = false;
	Complex a, b, result;
	a.Rez = 0; 
	a.Imz = 0; 
	b.Rez = 0;
	b.Imz = 0;
	result.Rez = 0;
	result.Imz = 0;
	cout << "Алоха! Добро пожаловать в программу по работе с комплексными числами!" << endl << endl;
	while (true) {
		menu();
		cin >> answer;
		switch (answer) {
		case 1:
			system("CLS");
			vvod(&a, &b);
			result = pluss(a, b);
			cout << endl << "Итог сложения: " << result.Rez << " + " << result.Imz << "i" << endl << endl;
			break;
		case 2:
			system("CLS");
			vvod(&a, &b);
			result = minuss(a, b);
			cout << endl << "Итог вычитания: " << result.Rez << " + " << result.Imz << "i" << endl << endl;
			break;
		case 3:
			system("CLS");
			vvod(&a, &b);
			result = umn(a, b);
			cout << endl << "Итог умножения: " << result.Rez << " + " << result.Imz << "i" << endl << endl;
			break;
		case 4:
			system("CLS");
			vvod(&a, &b);
			if (b.Rez == 0 && b.Imz == 0) {
				cout << endl << "Делить на ноль нельзя!" << endl << endl;
			}
			else {
				result = del(a, b);
				cout << endl << "Итог деления: " << result.Rez << " + " << result.Imz << "i" << endl << endl;
			}
			break;
		case 5:
			system("CLS");
			cout << "Спасибо за использование нашей программы! Удачи!" << endl << endl;
			exit = true;
			Sleep(2000);
			break;
		}
		if (exit) { break; }
	}
	//system("pause");
	return 0;
}