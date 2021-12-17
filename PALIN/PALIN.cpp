#include <bits/stdc++.h>

using namespace std;

int f[2001][2001];

int main()
{
    freopen("PALIN.inp","r",stdin);
    freopen("PALIN.out","w",stdout);
    string a, b;
    cin >> a;
    b = a;
    reverse(b.begin(), b.end());
    int m = a.size(), n = b.size();
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                f[i][j] = 0;
            } else if (a[i - 1] == b[j - 1]) {
                f[i][j] = f[i - 1][j - 1] + 1;
            } else {
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
    }
    int d = f[m][n];
    string kq = "";
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (a[i - 1] == b[j - 1]) {
            kq = a[i - 1] + kq;
            i--;
            j--;
            d--;
        } else if (f[i - 1][j] > f[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }
    cout << kq;
    return 0;
}