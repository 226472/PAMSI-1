#ifndef STACK_HH
#define STACK_HH

#include "istack.hh"
#include "irunnable.hh"

/*
	klasa stack
*/

class stack : public istack , public irunnable{
public:
	void push();
	void pop();
	void size();

	void start();
	void stop();

	void run();

	stack();
	~stack();

private:
	//int _stack[] = NULL;
	//int SIZE;
};

#endif