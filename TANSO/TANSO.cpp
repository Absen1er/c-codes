#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("TANSO.inp","r",stdin);
    freopen("TANSO.out","w",stdout);
    string s;
    cin >> s;
    if (s[0] == '-') s.erase(0, 1);
    while (s[0] == '0' && s.size() > 1) s.erase(0, 1);
    map<char, int> m;
    for (int i = 0; i < s.size(); i++) m[s[i]]++;
    for (int i = 48; i <= 57; i++) cout << m[char(i)] << " ";
    return 0;
}