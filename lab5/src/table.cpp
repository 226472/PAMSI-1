#include <ctime>
#include <cstdlib>
#include <iostream>

#include "table.hh"

using namespace std;

table::table()
{
	cout << "Podaj rozmiar tablicy: ";
	cin >> ROZMIAR;

	_table = new int [ROZMIAR];

	srand(time(NULL));

	for (int i=0 ; i < ROZMIAR ; i++)
	{
		//_table[i] = ((rand() % ROZMIAR) + 1);  // losowe liczby z zakresu od 1 do ROZMIAR 
		//_table[i] = i+1;                         // rosnace liczby
		_table[i] = (ROZMIAR-i);               // malejace liczby
	}
}

table::~table()
{
	delete [] _table;
}

void table::size()
{
	for (int i=0 ; i < ROZMIAR ; i++)
	{
		cout << _table[i] << " ";
	}
	cout << endl;
}

void table::quicksort(int tab[], int left, int right)
{
	int i = left;
	int j = right;

	//int pivot = tab[(left+right)/2];  // pivot po srodku
	//int pivot = tab[left];            // pivot lewy skrajny
	int pivot = tab[right];           // pivot prawy skrajny

	do
	{
		while (tab[i] < pivot)
		{
			i++;
		}

		while (tab[j] > pivot)
		{
			j--;
		}

		if (i <= j)
		{
			int bufor = tab[i];
			tab[i] = tab[j];
			tab[j] = bufor;

			i++;
			j--;
		}

	} while (i <= j);

	if (left < j) quicksort(tab, left, j);
	if (right > i) quicksort(tab, i, right);
}

void table::run()
{
	//size();
	quicksort(_table,0,(ROZMIAR-1));
	//size();
}