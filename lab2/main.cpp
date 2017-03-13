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
	int tablica[];
	int ROZMIAR;

	int powieksz_tablice1();

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

	return tablica[ROZMIAR];
}

int tab_dyn::wypelnij_tablice()
{
	int ilosc;

	cout << "Ile wartosci chcesz wprowadzic ? ";
	cin >> ilosc;

	for (int i=1 ; i < ilosc ; i++)
	{
		tablica[i] = 0;
	}	

	return tablica[ROZMIAR];
}

int tab_dyn::stworz_tablice()
{
	cout << "Wpisz poczatkowa dlugosc tablicy: ";
	cin >> ROZMIAR;

	return tablica[ROZMIAR];
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