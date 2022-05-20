#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main() {
    freopen("DD.inp","r",stdin);
    freopen("DD.out","w",stdout);
    int n, k, r = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        r = max(r, a[i]);
    }
    int l = 1;
    while (l <= r) {
        int m = (l + r) / 2, count = 0;
        for (int i = 1; i <= n; i++) {
            count += a[i] / m;
        }
        if (count >= k) l = m + 1;
        else r = m - 1;
    }
    cout << l - 1;
    return 0;
}