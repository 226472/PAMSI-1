#include "interfejs.hh"
#include "stoper.hh"
#include "tablica.hh"
#include "test.hh"

#include <iostream>

using namespace std;

void testuj(interfejs & obiekt_testowy)
{
	obiekt_testowy.wykonaj_algorytm();
}

int main()
{
	stoper stoper;
	test test1;
	tab_dyn tab_dyn1;

	stoper.start();
	testuj(tab_dyn1);
	stoper.stop();

	return 0;
}