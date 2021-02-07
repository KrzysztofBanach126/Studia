#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int number, right_bit, left_bit;
    unsigned int left_mask = 1 << 31;
    unsigned int right_mask = 1;
    cout << "Liczba = ";
    cin >> number;
    for (int i = 0; i < 32; ++i)
    {
        right_bit = (number & right_mask << i);
        left_bit = (number & left_mask >> i);
    }
    //cout<<"Bit prawy = "<<bit_prawy<<endl;
    //cout<<"Bit lewy = "<<bit_lewy<<endl;
    if (left_bit == right_bit)
        cout << "To jest palindrom!";
    else
        cout << "To nie jest palindrom!";
}