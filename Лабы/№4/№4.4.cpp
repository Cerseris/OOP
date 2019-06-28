#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Child {
private:
	string name;
	string surname;
	int age;
public:

	Child(string n, string sn, int a) {
		name = n;
		surname = sn;
		age = a;
	}

	void vyvod() {
		cout << "Как зовут ребёнка? " << name << endl;
		cout << "Какая у него фамилия? " << surname << endl;
		cout << "Сколько ему лет? " << age << endl;
		cout << endl << endl;;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");

	Child Melanie("Мелани", "Мартинез", 24);
	Child Billie("Билли", "Айлиш", 17);

	Melanie.vyvod();
	Billie.vyvod();

	Melanie.vyvod();
	Billie.vyvod();

	system("pause");
	return 0;
}