// Seminar2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "ex4.h"
#include <iostream>
#include <string.h>
#include "konto.h"

using namespace std;


//EX1 - Gasirea sirului in alt sir
char * strfind(const char * s, const char* f)
{
	int i = 0, j, aux;
	while (i<strlen(f))
	{
		j = 0;
		aux = i;
		while (f[i] == s[j] && j<strlen(s))
		{
			j++;
			i++;
		}
		if (j == strlen(s))
			return const_cast<char*>(&f[aux]);
		i++;
	}
	return NULL;
}
// EX2 - MARIMEA STRUCTURII
struct sizemin {
	
	char z;
	bool y;
	int x;
	long m;
	double n;
	long double o;
};

struct sizemax {
	long double m;
	char y;
	double n;
	bool z;
	long p;
	int x;
};
int main()
{	
	char s[100] = "abcdef";
	char v[100] = "xxaz1.abcdefgh";
	char * r = strfind(s, v);
	cout << "Marimea maxima, respectiv minima a structurii: " << sizeof(struct sizemax) << ' ' << sizeof(struct sizemin);
	cout << endl << r << endl;
	int i = lungime(v);
	cout <<"EX4 // Lungimea sirului de caract: "<< i;
	//EX 4: strlen si strcpy: 
	copiere(s, v);

	//EX 6, 7, 8: Clasa

	Cont a(2031.00);
	double b = 100;


	a.bezahlen(b);
	std::cout << a.getterSold() << std::endl;

	a.einzahlen(b);
	std::cout << a.getterSold() << std::endl;

	a.citire();

}

