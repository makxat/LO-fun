#include <iostream>

typedef long long ll;
using namespace std;

int potega(int x);
int ile_cyfr(int x);
bool liczba_amstronga(int x);

int main() {
    ll n, m;
    cerr << " MAX = ";
    cin >> m;
    cerr << " Liczby Armstronga : ";
    for(int x = 0; x <= m; x++)
        if(liczba_amstronga(x)) cout << x <<' ';

    cerr << endl <<" Podaj liczbe n = ";
    cin >> n;
    cerr << " Czy liczba " << n << " jest liczba Armstronga ? " << endl;

    if(liczba_amstronga(n)) cerr << " Tak! " << endl;
    else cerr << " Nie! " << endl;

    return 0;
}

int ile_cyfr(int x) {
    int licz = 0;
    do {
        x /= 10;
        licz++;
    }while(x > 0);

    return licz;
}

int potega(int c, int n) {
    int pot = 1;
    while(n--) pot *= c;

    return pot;
}

bool liczba_amstronga(int x) {
    int n = ile_cyfr(x);
    int suma = 0;
    for(int y = x; y > 0; y /= 10) {
        int c = y % 10;
        suma += potega(c, n);
    }
    return suma == x;

}
