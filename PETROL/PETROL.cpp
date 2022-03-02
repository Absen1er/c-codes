#include <bits/stdc++.h>

using namespace std;

long long a[100001], b[100001], c[100001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("PETROL.inp","r",stdin);
    freopen("PETROL.out","w",stdout);
    long long n, pos = 1;
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    for (long long i = 2; i <= n; i++) {
        if (a[pos] * (c[i] - b[i]) > a[i] * (c[pos] - b[pos])) {
            pos = i;
        }
    }
    cout << pos;
    return 0;
}

