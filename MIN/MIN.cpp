#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("MIN.inp","r",stdin);
    freopen("MIN.out","w",stdout);
    int k, pos = 0;
    string str;
    cin >> k >> str;
    string s = "";
    for (int i = 0; i < str.size(); i++) {
        if (isdigit(str[i])) {
            s += str[i];
        }
    }
    int temp = k;
    for (int i = 1; i <= k; i++) {
        char ss = '9';
        for (int j = pos; j <= s.size() - temp; j++) {
            if (s[j] < ss) {
                ss = s[j];
                pos = j + 1;
            }
        }
        cout << ss;
        temp--;
    }
    return 0;
}