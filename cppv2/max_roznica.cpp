#include <iostream>

using namespace std;

int mini, maks, wynik;


int main()
{

    int n, tab[500000];

    cerr << " Podaj ile chcesz miec elementow w tablicy : ";
    cin >> n;
    cerr << " Podaj liczby ciagu : ";

    for(int i = 0; i < n; i++)
    {
       cin >> tab[i];
    }

    mini = tab[0];
    maks = tab[0];

    for(int c = 1; c < n; c++)
    {
        if(tab[c] > maks) maks = tab[c];
        if(tab[c] < mini) mini = tab[c];
    }

    wynik = maks - mini;
    cout << wynik;


    return 0;
}
