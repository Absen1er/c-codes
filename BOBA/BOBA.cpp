#include <bits/stdc++.h>

using namespace std;

int helper(string t, string s) {
    int count = 0;
    for (int i = 0; i <= s.size() - 3; i++) {
        string temp = s.substr(i, 3);
        if (temp == t) count++;
    }
    return count;
}

int main() {
    freopen("BOBA.inp","r",stdin);
    freopen("BOBA.out","w",stdout);
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        int maxCounter = 0;
        for (int i = 0; i <= s.size() - 3; i++) {
            string temp = s.substr(i, 3);
            maxCounter = max(maxCounter, helper(temp, s));
        }
        cout << maxCounter << '\n';
    }
    return 0;
}