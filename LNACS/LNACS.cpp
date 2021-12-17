#include <iostream>

using namespace std;

long long a[1001], b[1001], f[1001][1001];

int main() {
    freopen("LNACS.inp","r",stdin);
    freopen("LNACS.out","w",stdout);
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    for (int i = 1; i <= m; i++) {
        f[i][1] = f[i - 1][1] || a[i] == b[1];
    }
    for (int i = 1; i <= n; i++) {
        f[1][i] = f[1][i - 1] || a[1] == b[i];
    }
    for (int i = 2; i <= m; i++) {
        for (int j = 2; j <= n; j++) {
            if (a[i] == b[j]) {
                f[i][j] = f[i - 2][j - 2] + 1;
            } else {
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
    }
    cout << f[m][n];
    return 0;
}