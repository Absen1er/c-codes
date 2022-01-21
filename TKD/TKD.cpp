#include <bits/stdc++.h>

using namespace std;

int a[1001];
pair<int, int> b[1001];

int main() {
    freopen("TKD.inp","r",stdin);
    freopen("TKD.out","w",stdout);
    int n, r, cs = 0, kq = 0;
    cin >> n >> r;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            cs++;
            b[cs].first = i - r + 1;
            if (b[cs].first < 1) b[cs].first = 1;
            b[cs].second = i + r - 1;
            if (b[cs].second > n) b[cs].second = n;
        }
    }
    int x = 1;
    while (x <= n) {
        int t = 0;
        for (int i = 1; i <= cs; i++) {
            if (x >= b[i].first && x <= b[i].second) {
                t = b[i].second;
            }
        }
        if (t == 0) {
            cout << -1;
            return 0;
        }
        kq++;
        x = t + 1;
    }
    cout << kq;
    return 0;
}