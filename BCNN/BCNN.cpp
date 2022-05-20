#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    freopen("BCNN.inp","r",stdin);
    freopen("BCNN.out","w",stdout);
    long long a, b;
    cin >> a >> b;
    cout << a * b / gcd(a, b);
    return 0;
}