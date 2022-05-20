#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("TIMSO.inp","r",stdin);
    freopen("TIMSO.out","w",stdout);
    long long x, sum = 0;
    cin >> x;
    long long delta = sqrt(1 + 8 * x);
    if (delta * delta != 1 + 8 * x) cout << -1;
    else cout << (delta - 1) / 2;
    return 0;
}