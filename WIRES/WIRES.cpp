#include <iostream>
#include <vector>

using namespace std;

int a[5001], b[5001], f[5001][5001];

int main() {
    freopen("WIRES.inp","r",stdin);
    freopen("WIRES.out","w",stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i] == b[j]) {
                f[i][j] = f[i - 1][j - 1] + 1;
            } else {
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
    }
    cout << f[n][n] << endl;
    vector<int> kq;
    int i = n, j = n;
    while (i > 0 && j > 0) {
        if (a[i] == b[j]) {
            kq.push_back(a[i]);
            i--;
            j--;
        } else if (f[i - 1][j] > f[i][j - 1]) {
            i--;
        } else {
            j--;
        }
        
    }
    for (int i = kq.size() - 1; i >= 0; i--) {
        cout << kq[i] << " ";
    }
    return 0;
}