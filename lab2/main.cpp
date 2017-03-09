#include <iostream>

using namespace std;

class tablica // klasa tablca
{
	private:
	/*
	zdefiniowane funkcje prywatne na klasie tablica
	*/

	unsigned int ROZMIAR;
	int tab[]; // definicja obiektu tab

	int powieksz_tablice();
	int pomniejsz_tablice();

	public:
	/*
	zdefiniowane funkcje publiczne na klasie tablica
	*/

	int rozmiar(int ROZMIAR);
	int zapisanie_elementu(int indeks, int wartosc);
	void odczytanie_elementu(int indeks);
};

/*
metody
*/

int tablica::rozmiar(int ROZMIAR)
{
	return ROZMIAR;
}

int tablica::zapisanie_elementu(int indeks, int wartosc)
{
	cout << "Podaj indeks tablicy: ";
	cin >> indeks;
	cout << "Podaj wartosc elementu: ";
	cin >> wartosc;

	return indeks, wartosc;
}

void tablica::odczytanie_elementu(int indeks)
{
	cout << "Podaj indeks tablicy: ";
	cin >> indeks;
	
	cout << tab[indeks] << endl;	
}

int main()
{
	tablica *tab = new tablica[2];

	return 0;
}