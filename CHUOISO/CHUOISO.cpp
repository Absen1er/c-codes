#include <bits/stdc++.h>

using namespace std;

string tostring(int n) {
    string result = "";
    while (n > 0) {
        result = char(n % 10 + '0') + result;
        n /= 10;
    }
    return result;
}

int main() {
    freopen("CHUOISO.inp","r",stdin);
    freopen("CHUOISO.out","w",stdout);
    string s;
    cin >> s;
    vector<int> v;
    int a, temp = INT_MIN;
    while (cin >> a) {
        v.push_back(a);
        temp = max(temp, a);
    }
    if (s.size() < 3) return 0;
    while (s.size() <= temp) {
        int siz = s.size();
        int num = (s[siz - 1] - '0') + (s[siz - 2] - '0') + (s[siz - 3] - '0');
        s += tostring(num);
    }
    for (int i = 0; i < v.size(); i++) {
        cout << s[v[i] - 1] << '\n';
    }
    return 0;
}