#include <bits/stdc++.h>

using namespace std;

int f[1005][1005];

int main()
{
    freopen("LCS.inp","r",stdin);
    freopen("LCS.out","w",stdout);
    string a, b;
    cin >> a >> b;
    for (int i = 1; i <= a.size(); i++) {
        for (int j = 1; j <= b.size(); j++) {
           if (a[i - 1] == b[j - 1]) {
               f[i][j] = f[i - 1][j - 1] + 1;
           } else {
               f[i][j] = max(f[i - 1][j], f[i][j - 1]);
           }
        }
    }
    cout << f[a.size()][b.size()] << endl;
    string kq = "";
    int n = a.size(), m = b.size();
    while (n > 0 && m > 0) {
        if (a[n - 1] == b[m - 1]) {
            kq = a[n - 1] + kq;
            n--;
            m--;
        } else if (f[n - 1][m] > f[n][m - 1]) {
            n--;
        } else {
            m--;
        }
    }
    cout << kq;
    return 0;
}