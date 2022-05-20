#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    freopen("CHIACB.inp","r",stdin);
    freopen("CHIACB.out","w",stdout);
    long long a, b, result = 0;
    cin >> a >> b;
    long long ucln = gcd(a, b);
    for (int i = 1; i <= sqrt(ucln); i++) {
        if (ucln % i == 0) {
            result += 2;
            if (ucln / i == i) result--;
        }
    }
    cout << result;
    return 0;
}