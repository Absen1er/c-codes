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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("PALNUM.inp","r",stdin);
    freopen("PALNUM.out","w",stdout);
    long long n;
    cin >> n;
    while (n != rev(n)) {
        n += rev(n);
    }
    cout << n;
    return 0;
}

