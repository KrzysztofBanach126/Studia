#include <iostream>
using namespace std;


void function (string final_array[], int size, string input, int m)
{
	
	int suma=0;
	int klucz=0;
	for(int i=0; i<=size; ++i)
	{
		char z=input[i];
		suma+=static_cast<int>(z);
	}
	klucz=suma%m;
	while (klucz<m)
	{
		if (final_array[klucz]!="_") //klucz wskazuje miejsce zapelnione
		{
			klucz++;
		}
		else
		{
			final_array[klucz]=input;
			break;
		}
	}
}

int indeks(string array[], int size, string input, int m)
{
	int suma=0;
	int klucz=0;
	for (int i=0; i<=size; ++i)
	{
		char z=input[i];
		suma+=static_cast<int>(z);
	}
	klucz=suma%m; //wyliczylem klucz dla szukanego slowa
	while(klucz<m)
	{
		if (array[klucz]==input)
		{
			return klucz;
		}
		else 
		{
			klucz++;
		}
	}
	return -1;
}

int main ()
{
	int M=31;
	string tablica[31];
	string wyraz,wyraz2;
	int n,rozmiar,w,rozmiar2;
	for (int i=0; i<M; ++i) //wypielniam tablice "_"
	{
		tablica[i]="_";
	}
	cout<<"Podaj liczbe wyrazow N: ";
	cin>>n;
	cout<<"Podaj wyrazy: ";
	for (int i=0; i<n; ++i)
	{
		cin>>wyraz;
		rozmiar=wyraz.size();
		function (tablica, rozmiar, wyraz, M);
	}
	cout<<"Wynikowa tablica:"<<endl;
	for(int i=0; i<M; ++i)
	{
		cout<<tablica[i]<<" ";
	}
	cout<<endl;
	cout<<"Podaj liczbe wyrazow W: ";
	cin>>w;
	for (int i=0; i<w; ++i)
	{
		cout<<"Podaj wyraz: ";
		cin>>wyraz2;
		rozmiar2=wyraz2.size();
		cout<<"Indeks: "<<indeks(tablica,rozmiar2,wyraz2, M);
		cout<<endl;
	}
}
