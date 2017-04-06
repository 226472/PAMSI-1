#ifndef LIST_HH
#define LIST_HH

#include "ilist.hh"
#include "irunnable.hh"

#include <cstdlib>

/*
	klasa list
*/

class list : public ilist , public irunnable{
public:
	void add();
	void remove();
	void size();
	void find();
	void run();

	list();

private:
	struct elem{  // struktura odpowiadajaca jednemu elementowi na liscie
		int w_elem;   // wartosc elementu
		elem *next;   // wskaznik na nastepny element jezeli brak nastepenego to NULL

		elem()
		{
			next = NULL;
		}
	};

	elem *head;    // wskaznik na pierwszy element listy

	int SIZE;    // licznik do rozmiaru listy
};

#endif