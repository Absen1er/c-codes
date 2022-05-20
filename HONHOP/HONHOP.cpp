#include <bits/stdc++.h>

using namespace std;

int helper(char c) {
    if (c == 'I') return 1;
    if (c == 'V') return 5;
    if (c == 'X') return 10;
    if (c == 'L') return 50;
    if (c == 'C') return 100;
    if (c == 'D') return 500;
    if (c == 'M') return 1000;
}

int main() {
    freopen("HONHOP.inp","r",stdin);
    freopen("HONHOP.out","w",stdout);
    string s;
    cin >> s;
    long long num = (s[0] - '0') * helper(s[1]);
    long long result = num;
    for (int i = 2; i < s.size() - 1; i += 2) {
        int temp = (s[i] - '0') * helper(s[i + 1]);
        if (helper(s[i - 1]) < helper(s[i + 1])) {
            result = result - 2 * num + temp;
        } else {
            result += temp;
        }
        num = temp;
    }
    cout << result;
    return 0;
}