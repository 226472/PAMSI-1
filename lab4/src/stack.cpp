#include "stack.hh"
#include <iostream>
#include <cstdlib>

using namespace std;

/*
	metody klasy stack
*/

stack::stack()   // konstruktor stostu pustego
{
	SIZE = 0;
	_stack = new int[SIZE];
}

stack::~stack()  // destruktor
{
	delete [] _stack;
}

void stack::push()   // dodawanie elemntow na stos
{
	SIZE++;

	int * new_stack = new int [SIZE];  // tworzenie stosu

	for(int i=0 ; i < (SIZE-1) ; i++)
	{
		new_stack[i] = _stack[i];    // kopiowanie elementow z poprzedniego stosu
	}

	delete [] _stack;  // zwalnianie pamieci

	_stack = new_stack;

	_stack[SIZE-1] = SIZE;
}

void stack::pop()  // zdejmowanie elementow
{
	if(SIZE > 0)
	{
		int * new_stack = new int [SIZE-1];

		for(int i=0 ; i < (SIZE-1) ; i++)
		{
			new_stack[i] = _stack[i];    
		}

		delete [] _stack;

		_stack = new_stack;

		SIZE--;
	}

	else
	{
		cout << "Stos pusty!" << endl;
	}
}

void stack::size()  // pokazywnie rozmiaru i elementow
{
	cout << "Aktualna ilosc elementow na stosie to " << SIZE << endl;

	for(int i=0 ; i < SIZE ; i++)
	{
		cout << _stack[i] << " ";
	}

	cout << endl;
}

void stack::find() // szukanie elementu
{
	if(znajdz == NULL)
	{
		int wartosc;
		cout << "Wpisz szukana wartosc: ";
		cin >> wartosc;
		znajdz = &wartosc;
	}

	wsk = & _stack[SIZE-1];

	if(*znajdz == *wsk)
	{
		cout << "Szukana wartosc znaleziona!" << endl;
		znajdz = NULL;
	}

	else if(*znajdz != *wsk)
	{
		pop();
		find();
	}

	else
	{
		cout << "Nie znaleziono szukanej wartosci!" << endl;
		znajdz = NULL;
	}
}

void stack::run()
{
	int ile;

	cout << "Ile elementow dodac: ";
	cin >> ile;

	size();

	for(int i=0 ; i < ile ; i++)
	{
		push();
	}

	size();

	find();

	size();
}