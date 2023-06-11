#include <iostream>

using namespace std;

void sort_zlicz(int t[], int n, int k);

int main() {
    int n, k;
    cout << "Ile chcesz miec liczb do posortowania : ";
    cin >> n;
    cout << "Do jakiej liczby maja byc twoje cyferki : ";
    cin >> k;
    cout << "Podaj te liczby : ";
    int t[n];
    for(int i = 0; i < n; i++) cin >> t[i];

    sort_zlicz(t, n, k);
    for(int i = 0; i < n; i++)
        cout << t[i] << " ";
    cout << "\n";
    return 0;
}

void sort_zlicz(int t[], int n, int k) {
    int c[k] = {}; //tablica liczników wype³niona zerami
    for(int i = 0; i < n; i++)
        c[t[i]]++;
    for(int i = 0, j = 0; j < k; j++){
        while(c[j]-- > 0){
            t[i++] = j;
        }
    }
}
