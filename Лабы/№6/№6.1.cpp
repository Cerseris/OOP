#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string imya;
	string familiya;
	int vozrast;
	int propuski;
	string gruppa;
	Student(string n, string sn, int a, string g) {
		imya = n;
		familiya = sn;
		vozrast = a;
		gruppa = g;
	}
};

class Starosta : public Student {
public:
	string telephone;
	void set_propuski(Student s) {
		s.propuski += 1;
	}
	void svoi_propuski() {
		propuski -= 1;
	}
	void podpis_zhurnala() {
		cout << "Распишитесь, пожалуйста!" << endl;
	}
};