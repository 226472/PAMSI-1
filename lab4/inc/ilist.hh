#ifndef ILIST_HH
#define ILIST_HH

/*
	interfejs istack
*/

class ilist{
public:
	virtual void add() = 0;
	virtual void remove() = 0;
	virtual void size() = 0;
	virtual void get() = 0;
	virtual void find() = 0;
	virtual void wykonaj_algorytm() = 0;
};

#endif