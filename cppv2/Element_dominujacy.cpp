#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <utility>
#include <map>

using namespace std;

int dominujacy(vector<int> v, float n) {
    map<int, int> m;
    for(int x: v){
       if(m.find(x) == m.end())
            m[x] = 1;//zamiast lewej str = mozemy zapisac auto
        else
            m[x] = m[x] + 1;
    }
    for(pair<int, int> p: m) {
        cout << p.first << " --> " << p.second << "\n";
    }
    return 0;
}

int main() {
    vector<int> v; //zbieramy liczby ktore chcemy zliczac
    int n;
    cout << "Ile chcesz miec liczb w zbiorze : ";
    cin >> n;
    cout << "Podaj te liczby : ";
    while(n--) { //dodajemy dane do vectora
        int a;
        cin >> a;
        v.push_back(a);
    }
    cout << "====================\n";
    dominujacy(v, n);

    return 0;
}
