#include <iostream>
#include <ctime>

using namespace std;

// definicja klasy tab_dyn

class tab_dyn {//.............................

public:
	int inicjuj_tablice();
	void wypelnij_tablice();
	void rozmiar_tablicy();
	void wyswietl_tablice();

	tab_dyn();
	~tab_dyn();

private:
	int *tablica = NULL;
	int ROZMIAR;

	int powieksz_tablice1();
	int powieksz_tablice2();

};//..........................................

/*
	Publiczne metody klasy
*/

tab_dyn::tab_dyn()  // konstruktor dla klasy tab_dyn
{
	tablica = new int [ROZMIAR];   // rezerwacja pamieci 
}

tab_dyn::~tab_dyn()  // destruktor dla klasy tab_dyn
{
	delete tablica;            // zwolnienie pamieci
}

int tab_dyn::inicjuj_tablice()    // metoda wyznaczajaca poczatkowy rozmiar tablicy
{
	cout << "Wpisz poczatkowa dlugosc tablicy: ";
	cin >> ROZMIAR;

	return ROZMIAR;
}

void tab_dyn::wypelnij_tablice()   // metoda wypelniajaca tablice podawana przez uzytkownika liczba wartosci , jesli chcemy wprowadzic wiecej wartosci niz wynosi rozmiar tablicy powieksza sie ona automatycznie
{
	int ilosc;

	cout << "Ile wartosci chcesz wprowadzic ? ";
	cin >> ilosc;

	for (int i=0 ; i < ilosc ; i++)
	{
		tablica[i] = 1;   // wypelnianie tablicy jedynkami

		if (i >= ROZMIAR)   // warunek na powiekszenie tablicy (osiagniecie konca rozmiaru tablicy)
		{
			powieksz_tablice1(); // funkcja powiekszajaca tablice
		}
	}	
}

void tab_dyn::wyswietl_tablice()  // metoda wyswietlajaca cala tablice (puste miejsca takze) na standardowe wyjscie
{
	for (int i=0 ; i < ROZMIAR ; i++)
	{
		cout << tablica[i] << " ";
	}

	cout <<  endl;
}

void tab_dyn::rozmiar_tablicy()  // metoda wyswietlajaca aktualny rozmiar tablicy na standardowe wyjscie
{
	cout << "Aktualny rozmiar tablicy: " << ROZMIAR << endl;
}

/*
	Prywatne metody klasy
*/

int tab_dyn::powieksz_tablice1() // metoda powieksza tablice o 1
{
	ROZMIAR = ROZMIAR+1;

	return ROZMIAR;
}

int tab_dyn::powieksz_tablice2()  // metoda powieksza tablice dwukrotnie
{
	ROZMIAR = 2 * ROZMIAR;

	return ROZMIAR;
}

int main()
{
	clock_t start = clock();

	tab_dyn TAB;

	TAB.inicjuj_tablice();

	TAB.rozmiar_tablicy();

	TAB.wypelnij_tablice();

	TAB.wyswietl_tablice();

	TAB.rozmiar_tablicy();

	cout << "Czas dzialania algorytmu to " << ((clock() - start)) / (double) CLOCKS_PER_SEC << " s." << endl;

	return 0;
}