#ifndef TABLICA_HH
#define TABLICA_HH

#include "interfejs.hh"

// definicja klasy tab_dyn

class tab_dyn : public interfejs {//.............................

public:
	void dodaj_element(int indeks, int wartosc);
	void rozmiar_tablicy();
	void wyswietl_tablice();

	void wykonaj_algorytm();

	tab_dyn();
	~tab_dyn();

private:
	int *tablica;
	int ROZMIAR;

	int *powieksz_tablice1(int old_tablica[]);
	int *powieksz_tablice2(int old_tablica[]);

};//..........................................

#endif