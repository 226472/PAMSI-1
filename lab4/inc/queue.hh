#ifndef QUEUE_HH
#define QUEUE_HH

#include "iqueue.hh"
#include "irunnable.hh"

#include <cstdlib>

/*
	klasa queue
*/

class queue : public iqueue , public irunnable{
public:
	void enqueue();
	void dequeue();
	void size();
	void find();
	void run();

	queue();
	~queue();

private:
	int  *_queue = NULL;  // kolejka
	int SIZE;
	int *wsk = NULL;  // wskaznik na eleme ktory mozna usunac
	int *znajdz = NULL;  // wskaznik na szukany element
};

#endif