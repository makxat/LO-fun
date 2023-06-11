#include <iostream>

using namespace std;

int main()
{
    int  t, m, g, s;
    cerr << " Podaj licbe sekund : ";;
    cin >> t;

    g = t / 3600, t %= 3600;
    m = t / 60, t %= 60;
    s = t / 1, t %= 1;

    cout << g << "g" << m << "m" << s << "s";

    return 0;
}
