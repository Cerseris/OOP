#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Vector {
private:
	double x;
	double y;
public:
	Vector(double a, double b) {
		x = a;
		y = b;
	}

	Vector& operator= (Vector& znach) {
		this->x = znach.x;
		this->y = znach.y;
		return *this;
	}

	friend bool operator== (const Vector& sleva, const Vector& sprava) {
		bool is_x = sleva.x == sprava.x;
		bool is_y = sleva.y == sprava.y;
		return is_x && is_y;
	}

	friend ostream& operator<< (ostream& out, const Vector& znach) {
		out << "( " << znach.x << " , " << znach.y << " )" << endl;
		return out;
	}

	friend istream& operator>> (istream& is, const Vector& znach) {
		is >> znach.x >> znach.y;
		return is;
	}

	float module() {
		return sqrt(pow(x, 2) + pow(y, 2));
	}

	void summ(Vector b) {
		x += b.x;
		y += b.y;
	}

	void diff(Vector b) {
		x -= b.x;
		y -= b.y;
	}

	void vyvod() {
		cout << x << " " << y << endl;
	}
};