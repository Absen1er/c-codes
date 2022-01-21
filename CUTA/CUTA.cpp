#include <bits/stdc++.h>

long long f[10001], V[7] = {0, 1, 2, 5, 10, 15, 20};

using namespace std;

int main() {
    freopen("CUTA.inp","r",stdin);
    freopen("CUTA.out","w",stdout);
    long long w;
    cin >> w;
    for (int i = 1; i <= w; i++) {
        f[i] = w + 1;
        for (int j = 1; j <= 6; j++) {
            if (i >= V[j]) {
                f[i] = min(f[i], f[i - V[j]] + 1);
            }
        }
    }
    cout << f[w];
    return 0;
}