#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
	string name;
	int age;
public:
	void set__name(string s) {
		name = s;
	}
	void set__age(int a) {
		age = a;
	}
	virtual void zvuk() = 0;
};

class Cat : Animal {
	string breed;
public:
	void breed(string b) {
		breed = b;
	}
	void zvuk() {
		cout << "Meowww";
	}
};

class Dog : Animal {
public:
	Dog() {
		cout << "Bark!";
	}
	void zvuk() {
		cout << "I can stop if you want it, dude";
	}
};

class Parrot : Animal {
	string color;
public:
	Parrot(int a, string s) {
		color = s;
		age = a;
	}
	void zvuk() {
		cout << "Arrrrrr!";
	}
};