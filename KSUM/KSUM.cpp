#include <bits/stdc++.h>

using namespace std;

long long w[100005], f[100005];

int main() {
    freopen("KSUM.inp","r",stdin);
    freopen("KSUM.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    f[1] = w[1];
    for (int i = 2; i <= n; i++) {
        f[i] = f[i - 1] + w[i];
    }
    long long kq = f[k];
    for (int i = k + 1; i <= n; i++) {
        if (kq < f[i] - f[i - k]) {
            kq = f[i] - f[i - k];
        }
    }
    cout << kq;
    return 0;
}