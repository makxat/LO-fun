#include <iostream>

using namespace std;
typedef unsigned long long ll;

ll nwd ( ll a, ll b)
{
    while (b != 0)
    {
        ll pom = a;
        a = b;
        b = pom % b;
    }
    return a;
}

int main()
{
    ll a, b, x;
    cerr << " Podaj x : ";
    cin >> x;
    cerr << " Podaj a : ";
    cin >> a;
    cerr << " Podaj b : ";
    cin >> b;
    cout << nwd(x, b % x);

    return 0;
}
