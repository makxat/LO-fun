#include <iostream>
#include <utility>

using namespace std;
typedef long long lli;

lli NWD(lli a, lli b)
{
   if(b == 0) return a;
   else return NWD(b, a % b);
}

lli NWW(lli a, lli b)
{
    return a * (b / NWD(a, b));
}

pair<lli, lli> NWW_pzedzial(lli m)
{
    for(lli a = 1; a < m; a++)
    {
        lli c = a;
        for(int b = a + 1; b <= m; b++)
        {
            c = NWW(b, c);
            if(c == m) return pair<lli, lli>(a, b);
            if(c > m) break;
        }
    }
    return make_pair(0, 0);
}

int main()
{
    int m, z;
    cerr << " Podaj ile chcesz miec zapytan : ";
    cin >> z;
    while(z-- > 0)
    {
        cerr << " Podaj m : ";
        cin >> m;
        pair<lli, lli> rozw = NWW_pzedzial(m);
        if(rozw.first == rozw.second) cout << " NIE" << endl;
        else cout << " " <<rozw.first << " " << rozw.second << endl;
    }
}

int main1()
{
    int n;
    cerr << " Podaj z ilu liczb chcesz zrobic NWW : ";
    cin >> n;
    lli a;
    cin >> a;
    while(--n > 0)
    {
        lli b;
        cin >> b;
        a = NWW(a, b);
    }

    cout << a << endl;

    return 0;
}
