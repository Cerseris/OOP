#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int main()
	{
		ofstream out("C:\\Users\\yarov\\source\\repos\\ConsoleApplication66\\ConsoleApplication66\\text.txt");   // Открываем файл для записи
		out << "HelloWorld" << endl;         //Записываем первую строчку
		out << "UraRabotaet!!!" << endl;     //Записываем вторую строчку
		out.close(); //Закрываем файл
	}
	system("pause");
	return 0;
}

