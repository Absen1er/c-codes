#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("BTD.inp","r",stdin);
    freopen("BTD.out","w",stdout);
    string s = "+-x";
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                int res1 = 0, res2 = 0, res = 0;
                if (s[i] == '+') res1 = m + m;
                if (s[i] == '-') res1 = m - m;
                if (s[i] == 'x') res1 = m * m;
                if (s[k] == '+') res2 = m + m;
                if (s[k] == '-') res2 = m - m;
                if (s[k] == 'x') res2 = m * m;
                if (s[j] == '+') res = res1 + res2;
                if (s[j] == '-') res = res1 - res2;
                if (s[j] == 'x') res = res1 * res2;
                if (res == n) {
                    cout << "((" << m << s[i] << m << ")" << s[j] << "(" << m << s[k] << m << "))=" << n;
                    return 0;
                }
            }
        }
    }
    cout << "Khong co cach";
    return 0;
}