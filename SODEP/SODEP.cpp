#include <bits/stdc++.h>

using namespace std;

bool check[1000002];
long long f[1000001];

int main() {
    freopen("SODEP.inp","r",stdin);
    freopen("SODEP.out","w",stdout);
    memset(check, true, sizeof(check));
    for (int i = 2; i <= 1000001; i++) {
        if (check[i]) {
            for (int j = i + i; j <= 1000001; j += i) {
                check[j] = false;
            }
        }
    }
    for (int i = 1; i <= 1000000; i++) {
        f[i] = f[i - 1];
        if (i % 2 != 0 && check[i] && check[(i + 1) / 2]) {
            f[i]++;
        }
    }
    long long q, l ,r;
    cin >> q;
    while (q--) {
        cin >> l >> r;
        cout << f[r] - f[l - 1] << '\n';
    }
    return 0;
}