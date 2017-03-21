#include "test.hh"

#include <iostream>

using namespace std;

/*
	testowe metody - maja po prostu dzialac a nie robic cos konkretnego
*/

void test::metoda1()
{
	cout << "metoda1" << endl;
}

void test::metoda2()
{
	cout << "metoda2" << endl;
}

void test::metoda3()
{
	cout << "metoda1" << endl;
}

void test::wykonaj_algorytm()
{
	test test;

	test.metoda1();
	test.metoda1();
	test.metoda1();
}