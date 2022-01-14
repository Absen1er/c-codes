#include <bits/stdc++.h>

using namespace std;

long long a[10001], f[10001];

int main() {
    freopen("DAYBDN.inp","r",stdin);
    freopen("DAYBDN.out","w",stdout);
    int n, k;
    long long t;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    f[1] = a[1];
    for (int i = 2; i <= n; i++) {
        t = 0;
        for (int j = 1; j < i; j++) {
            if (abs(a[j] - a[i]) <= k && t < f[j]) {
                t = f[j];
            }
        }
        f[i] = t + a[i];
    }
    long long kq = 0;
    for (int i = 1; i <= n; i++) {
        kq = max(kq, f[i]);
    }
    cout << kq;
    return 0;
}