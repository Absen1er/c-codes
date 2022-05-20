#include <bits/stdc++.h>

using namespace std;

int a[101][101], f[101][101];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ROBOT.inp","r",stdin);
    freopen("ROBOT.out","w",stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        f[i][1] = f[i - 1][1] + a[i][1];
    }
    for (int j = 1; j <= n; j++) {
        f[1][j] = f[1][j - 1] + a[1][j];
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= n; j++) {
            f[i][j] = min(f[i - 1][j], f[i][j - 1]) + a[i][j];
        }
    }
    vector<pair<int, int>> v;
    int i = n, j = n;
    while (i > 0 && j > 0) {
        v.push_back(make_pair(i, j));
        if (f[i - 1][j] < f[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }
    v.push_back(make_pair(1, 1));
    reverse(v.begin(), v.end());
    if (v[0].first == v[1].first && v[0].second == v[1].second) v.erase(v.begin());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << '\n';
    }
    return 0;
}