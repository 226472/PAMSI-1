#ifndef QUEUE_HH
#define QUEUE_HH

#include "iqueue.hh"
#include "irunnable.hh"

/*
	klasa queue
*/

class queue : public iqueue , public irunnable{
public:
	void enqueue();
	void dequeue();
	void size();
	void run();
};

#endif