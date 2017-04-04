#include "queue.hh"
#include <iostream>
#include <cstdlib>

using namespace std;

/*
	metody klasy queue
*/

queue::queue()
{
	SIZE = 0;
	_queue = new int[SIZE];
}

queue::~queue()
{
	delete [] _queue;
}

void queue::enqueue()
{
	SIZE++;

	int * new_queue = new int [SIZE];

	for(int i=0 ; i < (SIZE-1) ; i++)
	{
		new_queue[i] = _queue[i];    
	}

	delete [] _queue;

	_queue = new_queue;

	_queue[SIZE-1] = SIZE;
}

void queue::dequeue()
{
	if(SIZE > 0)
	{
		int * new_queue = new int [SIZE-1];

		for(int i=0 ; i < SIZE-1 ; i++)
		{
			new_queue[i] = _queue[i+1];    
		}

		delete [] _queue;

		_queue = new_queue;

		SIZE--;
	}

	else
	{
		cout << "Kolejka pusta!" << endl;
	}
}

void queue::size()
{
	cout << "Aktualna ilosc elementow w kolejce to: " << SIZE << endl;

	for(int i=0 ; i < SIZE ; i++)
	{
		cout << _queue[i] << " ";
	}

	cout << endl;
}

void queue::find()
{
	wsk = & _queue[0];

	cout << "Wskaznik: " << *wsk << endl;
}

void queue::run()
{
	int ile;

	cout << "Ile elementow dodac: ";
	cin >> ile;

	size();

	for(int i=0 ; i < ile ; i++)
	{
		enqueue();
	}

	size();

	find();

	cout << "Ile elementow zdjac: ";
	cin >> ile;

	for(int i=0 ; i < ile ; i++)
	{
		dequeue();
	}

	size();

	find();
}