#include <bits/stdc++.h>

using namespace std;

int helper(int x) {
    return (x - 1) * 2;
}

int main() {
    freopen("DETECTION.inp","r",stdin);
    freopen("DETECTION.out","w",stdout);
    int k, n, m;
    cin >> k;
    while (k--) {
        cin >> n >> m;
        if (n < m) cout << helper(n) << '\n';
        else cout << helper(m) << '\n';
    }
    return 0;
}