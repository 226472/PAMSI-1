#ifndef LIST_HH
#define LIST_HH

#include "ilist.hh"
#include "irunnable.hh"

/*
	klasa list
*/

class list : public ilist , public irunnable{
public:
	void add();
	void remove();
	void size();
	void get();
	void find();
	void run();

private:

};

#endif