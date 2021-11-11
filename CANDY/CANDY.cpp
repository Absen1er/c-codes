#include <bits/stdc++.h>

using namespace std;

int a[200001];

int main() {
    freopen("CANDY.inp","r",stdin);
    freopen("CANDY.out","w",stdout);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long leftsum = 0, rightsum = 0;
    for (int i = 0; i < n; i++) {
        leftsum += a[i];
    }
    long long kq = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        rightsum += a[i];
        kq = min(kq, abs(2 * rightsum - leftsum));
    }
    cout << kq;
    return 0;
}