#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("TAMGIAC.inp","r",stdin);
    freopen("TAMGIAC.out","w",stdout);
    long long n, m;
    cin >> n >> m;
    cout << (((n * (n - 1)) / 2) * m) + (((m * (m - 1)) / 2) * n);
    return 0;
}