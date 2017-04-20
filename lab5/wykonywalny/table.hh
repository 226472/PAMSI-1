#ifndef TABLE_HH
#define TABLE_HH

#include "itable.hh"
#include "irunnable.hh"

// definicja klasy table

class table : public itable , public irunnable {//.............................

public:
	void quicksort(int tab[], int left, int right);
	void mergesort(int, int);
	void merge(int, int, int);
	void size();
	void run();

	table();
	table(int);
	~table();

private:
	int *_table;
	int ROZMIAR;

};//..........................................

#endif