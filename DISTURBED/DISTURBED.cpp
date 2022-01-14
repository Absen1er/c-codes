#include <bits/stdc++.h>

using namespace std;

int a[101];

int main() {
    freopen("DISTURBED.inp","r",stdin);
    freopen("DISTURBED.out","w",stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int kq = 0;
    for (int i = 2; i < n; i++) {
        if (a[i - 1] + a[i + 1] == 2 && a[i] == 0) {
            kq++;
            a[i + 1] = 0;
        }
    }
    cout << kq;
    return 0;
}