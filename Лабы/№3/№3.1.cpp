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
	void set_name(string n) {
		name = n;
	}
	void set_surname(string sn) {
		surname = sn;
	}
	void set_age(int a) {
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
	Child Melanie;
	Child Billie;

	Melanie.set_name("Мелани");
	Melanie.set_surname("Мартинез");
	Melanie.set_age(24);

	Billie.set_name("Билли");
	Billie.set_surname("Айлиш");
	Billie.set_age(17);

	Melanie.vyvod();
	Billie.vyvod();

	system("pause");
	return 0;
}