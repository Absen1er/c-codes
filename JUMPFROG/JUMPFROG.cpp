#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("JUMPFROG.inp","r",stdin);
    freopen("JUMPFROG.out","w",stdout);
    long long a, b, k;
    cin >> a >> b >> k;
    long long chan = k / 2, le = k - k / 2;
    cout << a * le - b * chan;
    return 0;
}