#include <bits/stdc++.h>

using namespace std;

long long a[1000001], tang[1000001], giam[1000001], f1[1000001], f2[1000001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("LINEGAME.inp","r",stdin);
    freopen("LINEGAME.out","w",stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    tang[1] = a[1], giam[1] = 0, f1[1] = a[1], f2[1] = 0;
    long long kq = max(tang[1], giam[1]);
    for (int i = 2; i <= n; i++) {
        tang[i] = f2[i - 1] + a[i];
        giam[i] = f1[i - 1] - a[i];
        f1[i] = max(f1[i - 1], tang[i]);
        f2[i] = max(f2[i - 1], giam[i]);
        kq = max(kq, tang[i]);
        kq = max(kq, giam[i]);
    }
    cout << kq;
    return 0;
}

