#include <bits/stdc++.h>

using namespace std;

long long C(long long k, long long n) {
    if (k > n) return 0;
    if (k == 3) return n * (n - 1) * (n - 2) / 6;
    if (k == 4) return n * (n - 1) * (n - 2) * (n - 3) / 24;
}

int main() {
    freopen("XUNGKICH.inp","r",stdin);
    freopen("XUNGKICH.out","w",stdout);
    long long a, b, c, x;
    cin >> a >> b >> c >> x;
    long long result = (C(x, a + b) - C(x, a) - C(x, b)) + (C(x, b + c) - C(x, b) - C(x, c)) + (C(x, a + c) - C(x, a) - C(x, c)) + C(x, a) + C(x, b) + C(x, c);
    cout << result;
    return 0;
}