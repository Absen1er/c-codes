#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main() {
    freopen("HARVEST.inp","r",stdin);
    freopen("HARVEST.out","w",stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int kq = max(a[1] + a[2] + a[n], a[n] + a[n - 1] + a[1]);
    for (int i = 2; i < n; i++) {
        kq = max(kq, a[i] + a[i - 1] + a[i + 1]);
    }
    cout << kq;
    return 0;
}

