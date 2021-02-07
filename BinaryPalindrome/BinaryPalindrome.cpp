#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int liczba, bit_prawy, bit_lewy;
    unsigned int maska_lewa = 1 << 31;
    unsigned int maska_prawa = 1;
    cout << "Liczba = ";
    cin >> liczba;
    for (int i = 0; i < 32; ++i)
    {
        bit_prawy = (liczba & maska_prawa << i);
        bit_lewy = (liczba & maska_lewa >> i);
    }
    //cout<<"Bit prawy = "<<bit_prawy<<endl;
    //cout<<"Bit lewy = "<<bit_lewy<<endl;
    if (bit_lewy == bit_prawy)
        cout << "To jest palindrom!";
    else
        cout << "To nie jest palindrom!";
}