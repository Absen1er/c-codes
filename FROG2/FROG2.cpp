#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("FROG2.inp","r",stdin);
    freopen("FROG2.out","w",stdout);
    int n;
    cin >> n;
    if (n >= 7) cout << n + (n - 7 + 1);
    else cout << n;
    return 0;
}