#ifndef STACK_HH
#define STACK_HH

#include "istack.hh"
#include "irunnable.hh"

#include <cstdlib>

/*
	klasa stack
*/

class stack : public istack , public irunnable{
public:
	void push();
	void pop();
	void size();
	void find();
	void run();

	stack();
	~stack();

private:
	int  *_stack = NULL;    // stos
	int SIZE;
	int *wsk = NULL;   // wskaznik na element ktory mozna zdjac
	int *znajdz = NULL;   // szukana wartosc
};

#endif