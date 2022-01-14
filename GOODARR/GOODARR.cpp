#include <bits/stdc++.h>

using namespace std;

long long a[200001];

int main() {
    freopen("GOODARR.inp","r",stdin);
    freopen("GOODARR.out","w",stdout);
    long long n, maxso = LLONG_MIN, t = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        t += a[i];
    }
    int kq = 0;
    sort(a + 1, a + n + 1);
    for (int i = 1; i < n; i++) {
        if (a[n] * 2 == t - a[i]) {
            kq++;
        }
    }
    for (int i = 1; i < n; i++) {
        maxso = max(maxso, a[i]);
    }
    if (maxso * 2 == t - a[n]) kq++;
    cout << kq;
    return 0;
}