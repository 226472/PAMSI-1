#include "list.hh"
#include <iostream>
#include <cstdlib>

using namespace std;

/*
	metody klasy list
*/

list::list()
{
	head = NULL;
	SIZE = 0;
}

void list::add()
{
	SIZE++;

	elem *n_elem = new elem;

	int wartosc = SIZE;

	n_elem -> w_elem = wartosc;

	if(head == NULL)
	{
		head = n_elem;
	}

	else
	{
		elem *temp = head;

		while(temp -> next)
		{
			temp = temp -> next;
		}

		temp -> next = n_elem;
		n_elem -> next = NULL;
	}
}

void list::remove()
{
	int value;

	cout << "Podaj ktore miejsce na liscie chcesz usunac: ";
	cin >> value;

	if(value == 1)
	{
		elem *temp = head;
		head = temp -> next; 
	}

	else if (value >= 2)
	{
		int i =1;

		elem *temp = head;

		while(temp)
		{
			if( (i+1) == value )
			{
				break;
			}
			
			else
			{
				temp = temp -> next;
				i++;
			}
		}
		
		if(temp -> next -> next ==0)
		{
			temp -> next = 0;
		}

		else
		{
			temp -> next = temp -> next -> next;
		}
	}
}

void list::size()
{
	cout << "Aktualna ilosc elementow na liscie to " << SIZE << endl;

	elem *temp = head;

	while(temp)
	{
		cout << temp -> w_elem << " ";
		temp = temp -> next;
	}

	cout << endl;
}

void list::find()
{
	elem *temp = head;

	int szukaj;
	int f = 0;

	cout << "Wpisz szukana wartosc: ";
	cin >> szukaj;

	while(temp)
	{
		if(temp -> w_elem == szukaj)
		{
			cout << "Znaleziono warosc !" << endl;
			temp = NULL;
			f = 1;
		}
		else if(temp -> w_elem != szukaj)
		{
			temp = temp -> next;
		}
	}

	if(f == 0)
	{
		cout << "Nie znaleziono szukanej wartosci !" << endl;
	}
}

void list::run()
{
	size();

	int ile;

	cout << "Ile elementow dodac ";
	cin >> ile;

	for(int i=0 ; i < ile ; i++)
	{
		add();
	}

	size();

	find();

	remove();

	size();
}