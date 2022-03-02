#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("H2O.inp","r",stdin);
    freopen("H2O.out","w",stdout);
    map<char, int> m;
    m['H'] = 1;
    m['O'] = 16;
    m['N'] = 14;
    m['C'] = 12;
    string s;
    cin >> s;
    s += 'a';
    int kq = 0;
    for (int i = 0; i < s.size() - 1; i ++) {
        if (s[i] == 'H' || s[i] == 'O' || s[i] == 'N' || s[i] == 'C') {
            if (isdigit(s[i + 1])) {
                kq += m[s[i]] * (s[i + 1] - '0');
            } else {
                kq += m[s[i]];
            }
        }
    }
    cout << kq;
    return 0;
}