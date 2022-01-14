#include <iostream>

using namespace std;

int a[101], f[101][10001];

int main() {
    freopen("CATSAT.inp","r",stdin);
    freopen("CATSAT.out","w",stdout);
    int n, m;
    cin >> n >> m;
    int x, k = 0;
    for (int i = 1; i <= m; i++) {
        cin >> x;
        if (x <= n) {
            k++;
            a[k] = x;
        }
    }
    m = k;
    for (int j = 1; j <= n; j++) {
        f[1][j] = j / a[1];
    }
    for (int i = 2; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            f[i][j] = f[i - 1][j];
            if (j - a[i] >= 0) {
                f[i][j] = max(f[i - 1][j], f[i][j - a[i]] + 1);
            }
        }
    }
    cout << f[m][n];
    return 0;
}