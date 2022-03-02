#include <bits/stdc++.h>

using namespace std;

int a[10001], f[10001];

int main() {
    freopen("QUA.inp","r",stdin);
    freopen("QUA.out","w",stdout);
    int n, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s += a[i];
    }
    f[1] = a[1], f[2] = a[2], f[3] = a[3];
    for (int i = 4; i <= n; i++) {
        f[i] = a[i] + min(f[i - 1], min(f[i - 2], f[i - 3]));
    }
    cout << s - min(f[n], min(f[n - 1], f[n - 2])) << endl;
    vector<int> kq;
    for (int i = 1; i <= n; i++) {
        cout << f[i] << " ";
    }
    return 0;
}