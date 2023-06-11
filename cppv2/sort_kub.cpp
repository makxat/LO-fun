#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

void sort_kub(double t[], int n);

int main() {
    int n;
    cout << "Ile chcesz miec liczb do posortowania : ";
    cin >> n;
    cout << "Podaj te liczby : ";
    double t[n];
    for(int i = 0; i < n; i++)
        cin >> t[i];

    sort_kub(t, n);

    for(int i = 0; i < n; i++)
        cout << t[i] << " ";
    cout << "\n";
    return 0;
}

void sort_kub(double t[], int n) {
    vector<double> c[n];
    for(int i = 0; i < n; i++)
        c[int(n * t[i])].push_back(t[i]);
    for(int j = 0; j < n; j++)
        sort(c[j].begin(), c[j].end());
    for(int i = 0, j = 0; j < n; j++){
        for(double x: c[j])
            t[i++] = x;
        }
}
