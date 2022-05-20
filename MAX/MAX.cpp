#include <bits/stdc++.h>

using namespace std;

long long ltos(string s) {
    long long result = 0;
    for (int i = 0; i < s.size(); i++) {
        result = result * 10 + s[i] - '0';
    }
    return result;
}

int main() {
    freopen("MAX.inp","r",stdin);
    freopen("MAX.out","w",stdout);
    int n;
    cin >> n;
    string s, temp = "";
    long long result = 0;
    cin >> s;
    s += 'a';
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            temp += s[i];
        } else {
            if (temp != "") {
                result = max(result, ltos(temp));
                temp = "";
            }
        }
    }
    cout << result;
    return 0;
}