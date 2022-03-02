#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("TRANS.inp","r",stdin);
    freopen("TRANS.out","w",stdout);
    long long n, a, b, minA = 0, minB = 0, tong = LLONG_MAX;
    cin >> n >> a >> b;
    for (long long i = 0; i <= n / 50 + 1; i++) {
        for (long long j = 0; j <= n / 4 + 1; j++) {
            if (tong >= i * a + j * b && i * 50 + j * 4 >= n) {
                tong = i * a + j * b;
                minA = i;
                minB = j;
            }
        }
    }
    cout << minA << " " << minB;
    return 0;
}