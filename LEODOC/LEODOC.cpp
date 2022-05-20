#include <bits/stdc++.h>

using namespace std;

long long a[100005], f[100005];

int main() {
    freopen("LEODOC.inp","r",stdin);
    freopen("LEODOC.out","w",stdout);
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        cin >> a[i];
    }
    f[1] = 1;
    for (long long i = 2; i <= n; i++) {
        if (a[i] > a[i - 1]) {
            f[i] = f[i - 1] + 1;
        } else {
            f[i] = 1;
        }
    }
    long long result = 0, pos = 1;
    for (long long i = 2; i <= n; i++) {
        if (f[i] == 1) {
            result = max(result, a[i - 1] - a[pos]);
            pos = i;
        }
    }
    cout << max(result, a[n] - a[pos]);
    return 0;
}