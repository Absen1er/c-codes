#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("NUMBERS.inp","r",stdin);
    freopen("NUMBERS.out","w",stdout);
    int n;
    vector<int> v;
    cin >> n;
    string s, t = "";
    while (n--) {
        cin >> s;
        s += ' ';
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                t += s[i];
            } else {
                if (t != "") {
                    v.push_back(stoi(t));
                    t = "";
                }
            }
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << '\n';
    }
    return 0;
}