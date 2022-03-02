#include <bits/stdc++.h>

using namespace std;

long long a[1001], tang[1001], giam[1001];

long long tongcs(long long n) {
    long long kq = 0;
    while (n > 0) {
        kq += n % 10;
        n /= 10;
    }
    return kq;
}

int main() {
    freopen("BITONIC.inp", "r", stdin);
    freopen("BITONIC.out", "w", stdout);
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        tang[i] = tongcs(a[i]);
        giam[i] = tongcs(a[i]);
    }
    for (long long i = 1; i <= n; i++) {
        for (long long j = 0; j < i; j++) {
            if (a[i] > a[j] && tang[i] < tang[j] + tongcs(a[i])) {
                tang[i] = tang[j] + tongcs(a[i]);
            }
        }
    }
    for (long long i = n - 2; i >= 0; i--) {
        for (long long j = n - 1; j > i; j--) {
            if (a[i] > a[j] && giam[i] < giam[j] + tongcs(a[i])) {
                giam[i] = giam[j] + tongcs(a[i]);
            }
        }
    }
    long long kq = -1;
    for (long long i = 0; i < n; i++) {
        if (giam[i] != tongcs(a[i]) && tang[i] != tongcs(a[i])) {
            kq = max(kq, giam[i] + tang[i] - tongcs(a[i]));
        }
    }
    cout << kq;
    return 0;
}