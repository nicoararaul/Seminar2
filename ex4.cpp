#include "ex4.h"
#include "pch.h"
#include <iostream>

using namespace std;

int lungime(const char * s) {
	int i = 0;
	while (true)
	{
		if (*(s + i) == '\0') {

			return i;
		}
		i++;
	}
}

void copiere(const char * s, const char * v)
{
	char aux[] ="";
	int i;
	for (i = 0; i < (lungime(s) + lungime(v)); i++)
	{
		if (i < lungime(s)){
			aux[i] = *(s + i);
			cout << i;}
		if (i >= lungime(s))
			aux[i] = *(v + (i - lungime(s)+1));
	}
	aux[i] = '\0';
	cout << "\nEX4 // neue kette: " << aux;
}