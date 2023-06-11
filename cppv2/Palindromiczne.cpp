#include <iostream>
#include <iomanip>

using namespace std;

int odbicie(int n, int s) {
    int wynik = 0;
    while(n > 0) {
        wynik = wynik * s + n % s;
        n /= s;
    }
    return wynik;
}

int main() {
    int n; // liczba do odwrocenia
    cout << "Podaj n :";
    cin >> n;
    //int czy_odbita = odbicie(n, 2); //drugi argument to system w jakim mam zapisac odwrocona liczbe

    cout << odbicie(n, 2) << endl;
    cout  << odbicie(n, 10) << endl;
    cout << "-------------------" << endl;
    int suma = 0;
    for(int i = 0; i < 1000000; i++) {
        if(i == odbicie(i, 10) && i == odbicie(i, 2)) {
            cout << i << endl;
            suma += i;
        }
    }
    cout << "Suma = " << suma << endl;
    return 0;
}
