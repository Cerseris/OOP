#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct Book {
	int pages;
	string chapter;
	string author;
	string name_of_book;
	int edition;

	void booker() {
		cout << "Pages: " << pages << endl;
		cout << "Chapter: " << chapter << endl;
		cout << "Author: " << author << endl;
		cout << "Name of book: " << name_of_book << endl;
		cout << "Edition: " << edition << endl;
	}
};


int main() {
	setlocale(LC_ALL, "RUS");
	Book my_book = { 373, "Первая" , "Стивен Кинг", "Кладбище домашних животных", 1983 };
	my_book.booker();
	system("pause");
	return 0;
}