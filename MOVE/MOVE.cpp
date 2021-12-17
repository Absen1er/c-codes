#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    freopen("MOVE.inp","r",stdin);
    freopen("MOVE.out","w",stdout);
    int n, m, a[501][501];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i < n; i++) {
        a[i][0] += a[i - 1][0];
    }
    for (int i = 1; i < m; i++) {
        a[0][i] += a[0][i - 1];
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            a[i][j] = max(a[i - 1][j], a[i][j - 1]) + a[i][j];
        }
    }
    cout << a[n - 1][m - 1];
    return 0;
}