#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;
    cout << "ile elementow: " << s.size() << endl;
    s.insert(8); // dodanie do zbioru liczby 8
    s.insert(2);
    s.insert(4);
    s.insert(2);
    s.insert(6);
    s.insert(4);
    cout << "ile elementow: " << s.size() << endl;
    for (auto x: s)
        cout << x << " ";
    cout << endl;

    s.erase(4); // usuniecie ze zbiory liczby 4
    s.erase(0);
    cout << "ile elementow: " << s.size() << endl;
    for (auto x: s)
        cout << x << " ";
    cout << endl;

    int y = 0;
    cin >> y;
    if (s.find(y) != s.end()) cout << y << " jest w zbiorze" << endl;
    else cout << y << " nie ma w zbiorze" << endl;

    set<int> t = {2, 8, 6, 0};
    if (s == t) cout << "takie same" << endl;
    else cout << "roznia sie" << endl;

    return 0;
}
