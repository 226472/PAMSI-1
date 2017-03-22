#include "stoper.hh"

#include <ctime>
#include <iostream>
#include <fstream>

using namespace std;

void stoper::start()
{
	czas = clock();
}

void stoper::stop()
{
	double ile_czasu = ((clock() - czas)) / (double) CLOCKS_PER_SEC;

	cout << "Czas trwania programu to " << ile_czasu << " s." << endl;

	fstream plik;
	plik.open( "pomiary.txt" ,  ios::out | ios::app );

	if(plik.good() == true)
	{
		plik << ile_czasu << endl;

		plik.close();
	}

	else
	{
		cout << "Brak dostepu do pliku! Dane nie beda zapisane!" << endl;
	}

}