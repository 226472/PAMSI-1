#include "interfejs.hh"
#include "stoper.hh"
#include "tablica.hh"
#include "test.hh"

#include <iostream>

using namespace std;

int main()
{
	stoper stoper;
	tab_dyn obiekt_testowy;

	stoper.start();
	obiekt_testowy.wykonaj_algorytm();
	stoper.stop();

	return 0;
}