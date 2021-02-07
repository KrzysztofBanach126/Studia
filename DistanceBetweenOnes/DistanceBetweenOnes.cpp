#include <iostream>
using namespace std;
int main()
{
	unsigned int maska2 = 1; //program do szukania pierwszej jedynki z prawej
	int liczba;
	int i;
	int pozycja_prawa = 1;
	cout << "Liczba = ";
	cin >> liczba;
	for (int i = 1; i < 32; ++i)
	{
		if ((maska2 & liczba) != 0)
		{
			i = 33;
			break; //albo break, chce po prostu wyjsc z petli
		}
		else
		{
			maska2 = maska2 << 1;
			pozycja_prawa++;
		}
	}
	//cout<<"pozycja prawa = "<<pozycja_prawa<<endl;
	//szukam jedynki z lewej
	unsigned maska1 = 1 << 31;
	int pozycja_lewa = 31;
	for (int j = 1; j < 32; ++j)
	{
		if ((maska1 & liczba) != 0)
		{
			break;
		}
		else
		{
			maska1 = maska1 >> 1;
			pozycja_lewa--;
		}
	}
	pozycja_lewa++;
	//cout<<"pozycja lewa = "<<pozycja_lewa<<endl;
	//licze zera
	int liczba_zer = 0;
	for (int k = pozycja_prawa; k < pozycja_lewa; k++)
	{
		if ((liczba & 1 << k) == 0)
		{
			liczba_zer++;
		}
	}
	cout << "Wynik = " << liczba_zer;
}