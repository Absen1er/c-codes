#include <bits/stdc++.h>

using namespace std;

int a[1000001], f[1000001];

int main() {
    freopen("BEAUT.inp","r",stdin);
    freopen("BEAUT.out","w",stdout);
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    f[1] = a[1];
    for (int i = 2; i <= n; i++) {
        f[i] = f[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (f[i] == sum - f[i]) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}

