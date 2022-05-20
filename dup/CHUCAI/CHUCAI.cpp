#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("CHUCAI.inp","r",stdin);
    freopen("CHUCAI.out","w",stdout);
    string t, s = "";
    while (getline(cin, t)) s += t;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            s.erase(i, 1);
            i--;
        }
    }
    set<char> S;
    for (int i = 0; i < s.size(); i++) {
        S.insert(s[i]);
    }
    for (set<char>::const_iterator i = S.begin(); i != S.end(); i++) {
        cout << *i << " ";
    }
    return 0;
}