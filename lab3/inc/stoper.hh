#ifndef STOPER_HH
#define STOPER_HH

#include <ctime>

class stoper{
public:
	void start();
	void stop();
private:
	clock_t czas;
};

#endif