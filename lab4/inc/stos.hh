#ifndef STOS_HH
#define STOS_HH

#include "istack.hh"

/*
	klasa stos
*/

class stos : public istack{
public:
	void push();
	void pop();
	void size();
	void wykonaj_algorytm(); // ta metoda bedzie korzystac z klasy stoper ktora mierzy czas

	stos();
	~stos();

private:
	int _stos[] = NULL;
	int SIZE;
};

#endif