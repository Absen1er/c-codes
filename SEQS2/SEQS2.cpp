#include <iostream>

using namespace std;

int a[201];
bool f[201][40001];

int main() {
    freopen("SEQS2.inp","r",stdin);
    freopen("SEQS2.out","w",stdout);
    int n, s;
    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i <= n; i++) {
        f[i][0] = true;
    }
    for (int j = 1; j <= s; j++) {
        f[0][j] = false;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) {
            if (a[i] > j) {
                f[i][j] = f[i - 1][j];
            } else {
                f[i][j] = max(f[i - 1][j], f[i - 1][j - a[i]]);
            }
        }
    }
    if (f[n][s]) cout << "YES";
    else cout << "NO";
    return 0;
}