#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct avto {
	string marka;
	string model; 
	int losh_sil;
	int kolichestvo_dverey;
	string privod;

	void casco() {
		cout << "Marka avto: " << marka << endl;
		cout << "Model avto: " << model << endl; 
		cout << "Loshadinie sily: " << losh_sil << endl;
		cout << "Kolichestvo dverey: " << kolichestvo_dverey << endl;
		cout << "Vid privoda: " << privod << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RUS"); 
	avto moe = { "Renault", "Fluence", 106, 4, "Передний" };
	moe.casco();
	system("pause");
	return 0;
}

