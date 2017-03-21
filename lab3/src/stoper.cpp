#include "stoper.hh"

#include <ctime>
#include <iostream>

using namespace std;

void stoper::start()
{
	czas = clock();
}

void stoper::stop()
{
	double ile_czasu = ((clock() - czas)) / (double) CLOCKS_PER_SEC;

	cout << "Czas trwania programu to " << ile_czasu << " s." << endl;
}