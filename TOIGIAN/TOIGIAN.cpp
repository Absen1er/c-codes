#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    freopen("TOIGIAN.inp","r",stdin);
    freopen("TOIGIAN.out","w",stdout);
    int a, b;
    cin >> a >> b;
    int ucln = gcd(a, b);
    a /= ucln;
    b /= ucln;
    cout << a << " " << b;
    return 0;
}