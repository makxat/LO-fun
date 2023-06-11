#include <iostream>
#include <math.h>

typedef long long  int lli;
using namespace std;

int szukanie_binarne(lli tab[], int n, lli x)
{
    int a = 0, b = n - 1;
    while(a <= b) {
        int m = (a + b) / 2;
        if(x < tab[m]) b = m - 1;
        else if (tab[m] < x) a = m + 1;
        else return m;
    }
    return a;
}

int main()
{
    const int N = 1 << 21;
    lli *p3 = new lli[N + 1]; //utoworenie talicy na stercie

    for(int i = 0; i < N; i++)
        p3[i] = ((lli)(i) * i) * i;
    for(int i = 0; i <= 10; i++)
        cerr << i << "^3 = " << p3[i] << endl;
    for(int i = N - 10; i < N; i++)
        cerr << i << "^3 = " << p3[i] << endl;

    int t; // liczaba testów
    cerr << "Podaj ile chcesz miec testow : ";
    cin >> t;
    while(t--) {
        lli x;
        cerr << "Podaj wartosc, ktora chcesz znalesc : ";
        cin >> x;
        int y = szukanie_binarne(p3, N, x);
        cout << y << endl;
    }

    delete[] p3; // usuniecie tablicy ze sterty

    return 0;
}
