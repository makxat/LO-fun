#include <iostream>
#include <string>
#include <deque>

typedef long long ll;
using namespace std;

int main()
{
    int p;
    ll a;

    cerr << " Podaj a : ";
    cin >> a;
    cerr << " Podaj w jakim systemie chcesz zapisac liczbe a : ";
    cin >> p;

    string wynik;
    deque<ll> deq;

    do
    {
        ll c = a % p;
        wynik = to_string(c) + wynik;
        deq.push_front(c);
        a /= p;
    }while(a > 0);

    cout << wynik;

    return 0;
}
