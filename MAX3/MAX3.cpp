#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("MAX3.inp","r",stdin);
    freopen("MAX3.out","w",stdout);
    long long a, b, c;
    cin >> a >> b >> c;
    cout << max(a * b, max(b * c, a * c));
    return 0;
}