#include <iostream>
#include <string>
using namespace std;

void funkcja(string final_matrix[][10], int rows, int columns, string input, int m)
{
	int klucz = 0;
	int kod = 0;
	int rozmiar = input.size();
	int kolumna = 0;
	for (int i = 0; i < rozmiar; ++i)
	{
		kod = (int)input[i];
		klucz = (128 * klucz + kod) % m;
	}
	while (kolumna < 10)
	{
		if (final_matrix[klucz][kolumna] != "_") //miejsce gdzie chce wstawic element jest zapelnione
		{
			kolumna++;
		}
		else //mam puste miejsce, wiec wstawiam element
		{
			final_matrix[klucz][kolumna] = input;
			break;
		}
	}
}

int main()
{
	int M = 11;
	string tablica[11][10];
	string wyraz;
	int wiersze = 11;
	int kolumny = 10;
	int n;
	for (int i = 0; i < 11; ++i) //wypelniam tablice "_"
	{
		for (int j = 0; j < 10; ++j)
		{
			tablica[i][j] = "_";
		}
	}
	cout << "Podaj liczbe wyrazow N: ";
	cin >> n;
	cout << "Podaj wyrazy: ";
	for (int i = 0; i < n; ++i)
	{
		cin >> wyraz;
		funkcja(tablica, wiersze, kolumny, wyraz, M);
	}
	cout << "Wynikowa macierz:" << endl;
	for (int i = 0; i < 11; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			cout << tablica[i][j] << " ";
		}
		cout << endl;
	}
}