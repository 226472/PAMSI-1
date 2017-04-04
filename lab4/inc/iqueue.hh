#ifndef IQUEUE_HH
#define IQUEUE_HH

/*
	interfejs iqueue
*/

class iqueue{
public:
	virtual void enqueue() = 0;
	virtual void dequeue() = 0;
	virtual void size() = 0;
	virtual void find() = 0;
};

#endif