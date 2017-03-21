#include "interfejs.hh"
#include "stoper.hh"
#include "tablica.hh"

#include <iostream>

using namespace std;

int main()
{
	stoper stoper;
	tab_dyn obiekt;

	stoper.start();
	obiekt.wykonaj_algorytm();
	stoper.stop();


	return 0;
}