#include <bits/stdc++.h>

long long f[10001], V[101];

using namespace std;

int main() {
    freopen("BUS.inp","r",stdin);
    freopen("BUS.out","w",stdout);
    int S;
    cin >> S;
    for (int i = 1; i <= 9; i++) {
        cin >> V[i];
    }
    f[0] = 0;
    f[1] = 1;
    for (int i = 1; i <= S; i++) {
        f[i] = 1e18;
        for (int j = 1; j <= 9; j++) {
           if (i >= j) {
                f[i] = min(f[i], f[i - j] + V[j]);
           }
        }
    }
    if (f[S] == 1e18) {
        cout << "-1";
    } else {
        cout << f[S];
    }
    return 0;
}