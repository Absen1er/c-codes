#include <bits/stdc++.h>

using namespace std;

long long rev(long long n) {
    long long kq = 0;
    while (n > 0) {
        kq = 10 * kq + n % 10;
        n /= 10;
    }
    return kq;
}

int main() {
    freopen("SODX.inp","r",stdin);
    freopen("SODX.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    while (cin >> n) {
        if (n == rev(n)) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}