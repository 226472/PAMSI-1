#include "stack.hh"
#include <iostream>
#include <cstdlib>

using namespace std;

/*
	metody klasy stack
*/

stack::stack()
{
	SIZE = 0;
	_stack = new int[SIZE];
}

stack::~stack()
{
	delete [] _stack;
}

void stack::push()
{
	SIZE++;

	int * new_stack = new int [SIZE];

	for(int i=0 ; i < (SIZE-1) ; i++)
	{
		new_stack[i] = _stack[i];    
	}

	delete [] _stack;

	_stack = new_stack;

	_stack[SIZE-1] = SIZE;
}

void stack::pop()
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

void stack::size()
{
	cout << "Aktualna ilosc elementow na stosie to: " << SIZE << endl;

	for(int i=0 ; i < SIZE ; i++)
	{
		cout << _stack[i] << " ";
	}

	cout << endl;
}

void stack::find()
{
	wsk = & _stack[SIZE-1];

	cout << "Wskaznik: " << *wsk << endl;
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

	cout << "Ile elementow zdjac: ";
	cin >> ile;

	for(int i=0 ; i < ile ; i++)
	{
		pop();
	}

	size();

	find();
}