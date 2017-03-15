#include <iostream>
#include <ctime>

using namespace std;

// definicja klasy tab_dyn

class tab_dyn {//.............................

public:
	void dodaj_element(int indeks, int wartosc);
	void rozmiar_tablicy();
	void wyswietl_tablice();

	tab_dyn(int rozmiar);
	~tab_dyn();

private:
	int *tablica;
	int ROZMIAR;

	int *powieksz_tablice1(int old_tablica[]);
	int *powieksz_tablice2(int old_tablica[]);

};//..........................................

/*
	Publiczne metody klasy
*/

tab_dyn::tab_dyn(int rozmiar)  // konstruktor dla klasy tab_dyn
{
	tablica = new int [rozmiar];   // rezerwacja pamieci 

	ROZMIAR = rozmiar;
}

tab_dyn::~tab_dyn()  // destruktor dla klasy tab_dyn
{
	delete tablica;            // zwolnienie pamieci
}

void tab_dyn::dodaj_element(int indeks, int wartosc)   
{	
	if (indeks < ROZMIAR)
	{
		tablica[indeks] = wartosc;
	}

	else if (indeks >= ROZMIAR)   // warunek na powiekszenie tablicy (osiagniecie konca rozmiaru tablicy)
	{
		tablica = powieksz_tablice1(tablica);   // funkcja powiekszajaca tablice

		tablica[indeks] = wartosc;
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

int *tab_dyn::powieksz_tablice1(int old_tablica[]) // metoda powieksza tablice o 1
{
	ROZMIAR++;

	int * new_tablica = new int [ROZMIAR];

	for(int i=0 ; i < (ROZMIAR-1) ; i++)
	{
		new_tablica[i] = old_tablica[i];
	}

	//ROZMIAR = rozmiar;

	delete [] old_tablica;

	return new_tablica;
}

int *tab_dyn::powieksz_tablice2(int old_tablica[])  // metoda powieksza tablice dwukrotnie
{
	ROZMIAR *= 2;

	int * new_tablica = new int [ROZMIAR];

	for(int i=0 ; i < (ROZMIAR/2) ; i++)
	{
		new_tablica[i] = old_tablica[i];
	}

	//ROZMIAR = rozmiar;

	delete [] old_tablica;

	return new_tablica;
}

int main()
{
	clock_t start = clock();

	tab_dyn TAB(10); // poczatkowy rozmiar tablicy to 10

	TAB.rozmiar_tablicy();

	int ilosc;

	cout << "Ile elementow chcesz wprowadzic? ";
	cin >> ilosc;

	for (int i=0 ; i < ilosc ; i++)
	{
		TAB.dodaj_element(i,1);
	}

	TAB.wyswietl_tablice();

	TAB.rozmiar_tablicy();

	cout << "Czas dzialania algorytmu to " << ((clock() - start)) / (double) CLOCKS_PER_SEC << " s." << endl;

	return 0;
}