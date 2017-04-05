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
	struct elem{
		int w_elem;
		elem *next;

		elem()
		{
			next = NULL;
		}
	};

	elem *head;

	int SIZE;
};

#endif