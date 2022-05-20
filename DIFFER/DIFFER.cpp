#include <bits/stdc++.h>

using namespace std;

int a[5001], f1[5001][5001], f2[5001][5001];

int main() {
    freopen("DIFFER.inp","r",stdin);
    freopen("DIFFER.out","w",stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        f1[i][i] = i;
        f2[i][i] = i;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a[f1[i][j - 1]] < a[j]) {
                f1[i][j] = f1[i][j - 1];
            } else {
                f1[i][j] = j;
            }
            if (a[f2[i][j - 1]] > a[j]) {
                f2[i][j] = f2[i][j - 1];
            } else {
                f2[i][j] = j;
            }
        }
    }
    long long result = 0;
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            result += a[f2[i][j]] - a[f1[i][j]];
        }
    }
    cout << result;
    return 0;
}

