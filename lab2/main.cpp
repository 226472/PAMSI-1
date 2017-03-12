#include <iostream>

using namespace std;

class tab_dyn // klasa tab_dyn
{
public:
	int stworz_tablice();
	void rozmiar_tablicy();
	int dodaj_element();
	void wyswietl_element();

private:
	int tablica[];
	int ROZMIAR;

};

int tab_dyn::stworz_tablice()
{
	cout << "Podaj poczatkowy rozmiar tablicy: ";
	cin >> ROZMIAR;

	tablica[ROZMIAR];

	return tablica[ROZMIAR];
}

void tab_dyn::rozmiar_tablicy()
{
	cout << ROZMIAR << endl;
}

int tab_dyn::dodaj_element()
{
	int element, indeks;

	cout << "Podaj indeks: ";
	cin >> indeks;
	cout << "Podaj wartosc elementu: ";
	cin >> element;

	tablica[indeks] = element;

	return tablica[ROZMIAR];
}

void tab_dyn::wyswietl_element()
{
	int indeks;

	cout << "Podaj indeks: ";
	cin >> indeks;

	cout << "Element " << indeks << " = " << tablica[indeks] << endl;
}

int main()
{
	tab_dyn qqq;

	qqq.stworz_tablice();

	qqq.rozmiar_tablicy();

	qqq.dodaj_element();

	qqq.wyswietl_element();

	return 0;
}