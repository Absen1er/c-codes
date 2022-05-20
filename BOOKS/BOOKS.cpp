#include <bits/stdc++.h>

using namespace std;

int a[1001][1001];

int main() {
    freopen("BOOKS.inp","r",stdin);
    freopen("BOOKS.out","w",stdout);
    int n, result = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (a[i][j] == 0) result++;
        }
    }
    for (int i = 2; i < n; i++) {
        for (int j = 2; j < n; j++) {
            if (a[i][j] != 0) {
                int t1 = 0, t2 = 0, t3 = 0, t4 = 0;
                for (int k = i - 1; k >= 1; k--) {
                    if (a[k][j] >= a[i][j]) {
                        t1 = 1;
                        break;
                    }
                }
                for (int k = i + 1; k <= n; k++) {
                    if (a[k][j] >= a[i][j]) {
                        t2 = 1;
                        break;
                    }
                }
                for (int k = j - 1; k >= 1; k--) {
                    if (a[i][k] >= a[i][j]) {
                        t3 = 1;
                        break;
                    }
                }
                for (int k = j + 1; k <= n; k++) {
                    if (a[i][k] >= a[i][j]) {
                        t4 = 1;
                        break;
                    }
                }
                if (t1 * t2 * t3 * t4 == 1) result++;
            }        
        }
    }
    cout << n * n - result;
    return 0;
}