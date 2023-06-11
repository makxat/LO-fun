#include <iostream>
#include <string>
#include <deque>

typedef long long ll;
using namespace std;

string bin(ll n)
{
    if(n == 0) return "0";
    if(n == 1) return "1";
    else return bin(n / 2) + to_string(n % 2);
}

int main()
{
    ll n;
    cerr << " Podaj liczbe dziesietna : ";
    cin >> n;
    cout << bin(n) << endl;
    return 0;

    string wynik;
    deque<ll> deq;

    do
    {
        ll c = n % 2;
        wynik = to_string(c) + wynik;
        deq.push_front(c);
       
    }while(n > 0);

    cout << wynik << endl;

    for(ll c: deq) cout << c;
    cout << endl;

    return 0;
}
