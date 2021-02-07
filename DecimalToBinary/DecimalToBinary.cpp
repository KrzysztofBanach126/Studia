#include <iostream>
using namespace std;

int main()
{
    int liczba;
    unsigned int maska = 1;
    int licznik = 1;
    maska = maska << 31;
    cout << "Liczba w systemie dziesietnym = ";
    cin >> liczba;
    cout << "Postac binarna = ";
    while (maska >= 1)
    {
        if ((liczba & maska) == 0)
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
        licznik++;
        if (licznik == 5)
        {
            cout << " ";
            licznik = 1;
        }
        maska = maska >> 1;
    }
}