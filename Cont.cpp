#include "Cont.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
Cont::Cont(double isold)
{
	sold = isold;
}

double Cont::getterSold()
{
	return sold;
}


void Cont::bezahlen(const double& betrag)
{
	double* p = const_cast<double*>(&betrag);
	sold = sold - *p;
	extras2(*p);
}

void Cont::einzahlen(const double& betrag)
{
	double* p = const_cast<double*>(&betrag);
	sold = sold + *p;
	extras1(*p);
}

void Cont::extras1(double a)
{
	ofstream g;
	g.open("text.txt", ios::app);
	g << "IN " << a << " " << getterSold() << "\n";
	g.close();
}

void Cont::extras2(double a)
{
	ofstream h;
	h.open("text.txt", ios::app);
	h << "OUT " << a << " " << getterSold() << "\n";
	h.close();
}

void Cont::citire()
{
	ifstream f;
	f.open("text.txt");
	string a;
	while (getline(f, a))
	{
		cout << a << endl;

	}
}