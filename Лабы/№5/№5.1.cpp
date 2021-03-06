#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
	double re;
	double img;
public:
	Complex(double r, double i) {
		re = r;
		img = i;
	}

	Complex& operator= (Complex& value) {
		this->img = value.img;
		this->re = value.re;
		return *this;
	}

	Complex& operator++ () {
		this->re += 1;
		this->img += 1;
		return *this;
	}

	Complex& operator-- () {
		this->re -= 1;
		this->img -= 1;
		return *this;
	}

	friend bool operator== (const Complex& sleva, const Complex& sprava) {
		bool is_real = sleva.re == sprava.re;
		bool is_image = sleva.img == sprava.img;
		return is_real && is_image;
	}

	friend ostream& operator<<(ostream &out, const Complex& znach) {
		out << "К.ч. = " << znach.re << " + i * " << znach.img << endl;
		return out;
	}

	friend istream& operator>>(istream &in, const Complex &nomer) {
		in >> nomer.re >> nomer.img;
		return in;
	}

	double module() {
		return sqrt(pow(re, 2) + pow(img, 2));
	}

	void display() {
		cout << "Действительная часть комплексного числа: " << re << endl;
		cout << "Мнимая часть комплексного числа: " << img << endl;
		cout << "Модуль комплексного числа: " << this->module() << endl << endl;
	}
};