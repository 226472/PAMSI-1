#include <iostream>
#include <cstdlib>

using namespace std;

class tab_dyn { // klasa tab_dyn

public:
	int stworz_tablice();
	void rozmiar_tablicy();
	int dodaj_element();
	int wyswietl_element();

	int wypelnij_tablice();
	void wyswietl_tablice();

private:
	int *tablica = NULL;
	int ROZMIAR;

	int powieksz_tablice1();
	int powieksz_tablice2();

};

void tab_dyn::rozmiar_tablicy()
{
	cout << "ROZMIAR " << ROZMIAR << endl;
}

void tab_dyn::wyswietl_tablice()
{
	for (int i=0 ; i < ROZMIAR ; i++)
	{
		cout << tablica[i] << " ";
	}

	cout <<  endl;
}

int tab_dyn::powieksz_tablice1()
{
	ROZMIAR = ROZMIAR+1;

	return ROZMIAR;
}

int tab_dyn::powieksz_tablice2()
{
	ROZMIAR = 2 * ROZMIAR;

	return ROZMIAR;
}

int tab_dyn::wypelnij_tablice()
{
	int ilosc;

	cout << "Ile wartosci chcesz wprowadzic ? ";
	cin >> ilosc;

	for (int i=0 ; i < ilosc ; i++)
	{
		tablica[i] = 1;

		if (i >= ROZMIAR)
		{
			powieksz_tablice2();
		}
	}	
}

int tab_dyn::stworz_tablice()
{
	cout << "Wpisz poczatkowa dlugosc tablicy: ";
	cin >> ROZMIAR;

	tablica = new int[ROZMIAR];

	return *tablica;
}

/*

int tab_dyn::dodaj_element()
{
	int element, indeks;

	cout << "Podaj indeks: ";
	cin >> indeks;

	if (indeks > (ROZMIAR-1))
	{
		cout << "Blad" << endl;

		return 0;
	}

	cout << "Podaj wartosc elementu: ";
	cin >> element;

	tablica[indeks] = element;

	return tablica[ROZMIAR];
}

int tab_dyn::wyswietl_element()
{
	int indeks;

	cout << "Podaj indeks: ";
	cin >> indeks;

	if(indeks <= ROZMIAR)
	{
		cout << "Element " << indeks << " = " << tablica[indeks] << endl;
	}

	else
	{
		cout << "Blad" << endl;

		return 0;
	}

}

*/

int main()
{
	//srand( time (NULL) );

	tab_dyn TAB;

	TAB.stworz_tablice();

	TAB.rozmiar_tablicy();

	TAB.wypelnij_tablice();

	TAB.wyswietl_tablice();

	TAB.rozmiar_tablicy();

	return 0;
}