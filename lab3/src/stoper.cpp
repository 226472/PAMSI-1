#include "stoper.hh"

#include <ctime>

void stoper::start()
{
	clock_t czas = clock();
}

void stoper::stop()
{
	((clock() - czas)) / (double) CLOCKS_PER_SEC;
}