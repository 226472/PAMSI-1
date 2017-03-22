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

	for (int i=0 ; i < 10 ; i++)
	{
		cout << "Test nr. " << i+1 << endl;

		stoper.start();
		testuj(tab_dyn1);
		stoper.stop();
	}

	return 0;
}