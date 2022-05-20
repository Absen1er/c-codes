#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("DODAI.inp","r",stdin);
    freopen("DODAI.out","w",stdout);
    int n;
    string s;
    int length = 0, maxLength = 0;
    cin >> n >> s;
    s += 'a';
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) length++;
        else {
            maxLength = max(maxLength, length);
            length = 0;
        }
    }
    cout << maxLength;
    return 0;
}