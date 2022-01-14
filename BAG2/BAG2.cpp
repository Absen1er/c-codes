#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int w[101], v[101], f[101][101];

int main() {
    freopen("BAG2.inp","r",stdin);
    freopen("BAG2.out","w",stdout);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (w[i] > j) {
                f[i][j] = f[i - 1][j];
            } else {
                f[i][j] = max(f[i - 1][j], f[i - 1][j - w[i]] + v[i]);
            }
        }
    }
    cout << f[n][m] << endl;
    vector<int> kq;
    while (n > 0) {
        if (f[n][m] != f[n - 1][m]) {
            kq.push_back(n);
            m -= w[n];
        }
        n--;
    }
    for (int i = kq.size() - 1; i >= 0; i--) {
        cout << kq[i] << " ";
    }
    return 0;
}