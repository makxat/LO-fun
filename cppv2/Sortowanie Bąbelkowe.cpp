#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int t[n];
    for(int i = 0; i < n; i++)
        cin >> t[i];

    for(int rozm = n; rozm > 1; rozm--)
    {
        for(int i = 1; i < rozm; i++)
            if(t[i-1] > t[i]) swap(t[i-1], t[i]);
    }

    for(int i = 0; i < n; i++)
    {
        cerr << t[i] << ' ';
    }

    return 0;
}
