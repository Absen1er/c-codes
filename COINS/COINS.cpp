#include <bits/stdc++.h>

int f[10001], V[101];

using namespace std;

int main() {
    freopen("COINS.inp","r",stdin);
    freopen("COINS.out","w",stdout);
    int n, S;
    cin >> n >> S;
    for (int i = 1; i <= n; i++) {
        cin >> V[i];
    }
    f[0] = 0;
    f[1] = 1;
    for (int i = 1; i <= S; i++) {
        f[i] = S + 1;
        for (int j = 1; j <= n; j++) {
            if (i >= V[j]) {
                f[i] = min(f[i], f[i - V[j]] + 1);
            }
        }
    }
    if (f[S] == S + 1) {
        cout << "-1";
    } else {
        cout << f[S];
    }
    return 0;
}