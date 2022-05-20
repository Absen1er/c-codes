#include <bits/stdc++.h>

using namespace std;

long long c[2001][2001];
const long long mod = 1000000007;

int main() {
    freopen("TEAM.inp","r",stdin);
    freopen("TEAM.out","w",stdout);
    memset(c, 0, sizeof(c));
    for (int i = 0; i <= 2000; i++) {
        for (int j = i; j <= 2000; j++) {
            if (i == 0 || i == j) c[i][j] = 1;
            else c[i][j] = (c[i][j - 1] + c[i - 1][j - 1]) % mod;
        }
    }
    long long a, b, x, y, result = 0;
    cin >> a >> b >> x >> y;
    for (long long i = 0; i <= a; i++) {
        for (long long j = 0; j <= b; j++) {
            if (abs(i - j) <= y && i + j == x) {
                result += (c[i][a] * c[j][b]);
                result %= mod;
            }
        }
    }
    cout << result;
    return 0;
}