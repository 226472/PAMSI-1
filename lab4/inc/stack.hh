#ifndef STACK_HH
#define STACK_HH

#include "istack.hh"

/*
	klasa stack
*/

class stack : public istack , public : iclock{
public:
	void push();
	void pop();
	void size();

	void start();
	void stop();

	stack();
	~stack();

private:
	int _stack[] = NULL;
	int SIZE;
};

#endif