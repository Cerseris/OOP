#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
	bool mlecopit;
	int age;
	int hvost; 
	int sherst;

public:
	Animal(bool ml, int a, int h, int s) {
		mlecopit = ml;
		age = a;
		hvost = h;
		sherst = s;
	}
	virtual void sound() = 0;
};

class Dog : public Animal {
public:
	bool ohota;
	Dog(bool ml, int a, int t, int h, int s, bool o) : Animal(ml, a, h, s) {
		ohota = o;
	}

	void zvuk() {
		cout << "Gav - gav!" << endl;
	}
};

class Cat : public Animal {
public:
	bool polosatiy;
	Cat(bool ml, int a, int s, bool polos, int h) : Animal(ml, a, s, h) {
		polosatiy = polos;
	}

	void zvuk() {
		cout << "Meooooooow!" << endl;
	}
};