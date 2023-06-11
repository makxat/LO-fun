#include <iostream>

using namespace std;

long long nwde (long long a, long long b)
{
    if(a == 0) return b;
    if(b == 0) return a;

    while(a % b != 0)
    {
        long long pom = a;
        a = b;
        b = (pom % b);
        cout << a << ' ' << b << endl;
    }
    return b;
}

int main()
{
   long long  a, b;
   cerr << "Podaj a : ";
   cin >> a;
   cerr << "Podaj b : ";
   cin >> b;
   cout << nwde(a, b) << endl;
    return 0;
}
