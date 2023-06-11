#include <iostream>

using namespace std;

int binsrch(int x, int t[], int n);
int binsrch_2(int x, int t[], int n);

int main() {
    int N = 10;
    int tab[] = {2, 3, 4, 4, 5 , 7, 8, 8, 8, 11};
    int x;
    cout << "Podaj liczbe, ktora chcesz znalesc w ciagu: ";
    cin >> x;

    cout << "Binsrch : " << binsrch(x, tab, N) << endl;
    cout << "Binsrch_2 : " << binsrch_2(x, tab, N) << endl;
    cout << "Binsrch_2 - Binsrch: " << binsrch_2(x, tab, N) - binsrch(x, tab, N) << endl;
    cout << "Liczba " << x << " wystepuje " << binsrch_2(x, tab, N) - binsrch(x, tab, N) << " razy w tab[]\n";
    return 0;
}

int binsrch(int x, int t[], int n) {
    int p = 0, k = n; //wartownik - poczatek, wartownik - koniec
    while(p < k) {
        //cout << p << ", " << k << endl;
        int m = (p + k) / 2; //policzenie œrodka (mediane)
        if(x > t[m])
            p = m + 1; //przesuniecie wartownika(poczatek) na srodek
        else
            k = m; //przesuniecie wartownika(koniec) na œrodek
    }
    return p;
}

int binsrch_2(int x, int t[], int n) {
    int p = 0, k = n;
    while(p < k) {
        cout << p << ", " << k << endl;
        int m = (p + k) / 2;
        if(x >= t[m])
            p = m + 1;
        else
            k = m;
    }
    return p;
}
