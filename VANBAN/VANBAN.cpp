#include <bits/stdc++.h>

using namespace std;

string a[101];
int f[101][101];
int c[101][101];

int main() {
    freopen("VANBAN.inp","r",stdin);
    freopen("VANBAN.out","w",stdout);
    int n;
    string s;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> s;
    for (int j = 0; j <= s.size(); j++) {
        f[0][j] = 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s.size(); j++) {
            if (a[i].size() <= j) {
                if (f[i][j - a[i].size()] < f[i - 1][j]) {
                    f[i][j - a[i].size()] = f[i - 1][j];
                }
                if (f[i][j - a[i].size()] == f[i - 1][j]) {
                    c[i][j]++;
                }
            }
        }
    }
    cout << c[n][s.size()];
    return 0;
}