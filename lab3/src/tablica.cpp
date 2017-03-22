#include "tablica.hh"

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/*
	Publiczne metody klasy
*/

tab_dyn::tab_dyn()  // konstruktor dla klasy tab_dyn
{
	//cout << "Podaj poczatkowy rozmiar tablicy: ";
	//cin >> ROZMIAR;

	ROZMIAR = 10;
	
	if (ROZMIAR >= 0)
	{	
		tablica = new int [ROZMIAR];   // rezerwacja pamieci
	}

	else
	{
		cout << "Blad konstruktora" << endl;

		exit(0);
	}	 
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

	else if (indeks >= ROZMIAR)   // warunek na powiekszenie tablicy (osiagniecie aktualnego konca rozmiaru tablicy)
	{
		tablica = powieksz_tablice1(tablica);   // powiekszanie tablicy odpowiednia funkcja

		tablica[indeks] = wartosc;       // dodawanie wartosci po zwiekszeniu
	}	

	else
	{
		cout << "Blad funkcji dodaj_element." << endl;

		exit(0);
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
	ROZMIAR++;                   // powiekszanie tablicy

	int * new_tablica = new int [ROZMIAR];    // rezerwacja pamieci na nowa tablice

	for(int i=0 ; i < (ROZMIAR-1) ; i++)    // kopiowanie starej tablicy do nowej
	{
		new_tablica[i] = old_tablica[i];    
	}

	delete [] old_tablica;  // zwalnianie pamieci ze starej tablicy

	return new_tablica;
}

int *tab_dyn::powieksz_tablice2(int old_tablica[])  // metoda powieksza tablice dwukrotnie
{
	ROZMIAR *= 2;      // powiekszanie tablicy

	int * new_tablica = new int [ROZMIAR];     // rezerwacja pamieci na nowa tablice

	for(int i=0 ; i < (ROZMIAR/2) ; i++)    // kopiowanie starej tablicy do nowej
	{
		new_tablica[i] = old_tablica[i];
	}

	delete [] old_tablica;      // zwalnianie pamieci ze starej tablicy

	return new_tablica;
}

void tab_dyn::wykonaj_algorytm()
{
	rozmiar_tablicy();

	int ilosc;

	cout << "Ile elementow chcesz wprowadzic? ";
	cin >> ilosc;

	//ilosc = 10;

	for (int i=0 ; i < ilosc ; i++)
	{
		dodaj_element(i,1);
	}

	//wyswietl_tablice();

	rozmiar_tablicy();
}