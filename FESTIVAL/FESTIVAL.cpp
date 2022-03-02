#include <bits/stdc++.h>

using namespace std;

int a[100001], b[100001], c[100001];
pair<int, int> d[100001];

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    freopen("FESTIVAL.inp","r",stdin);
    freopen("FESTIVAL.out","w",stdout);
    int n, x, y, z;
    cin >>  x >> y >> z >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i] >> c[i];
        d[i].first = a[i] * x + b[i] * y + c[i] * z;
        d[i].second = i;
    }
    sort(d + 1, d + n + 1);
    sort(d + 1 + n - 3, d + n + 1, cmp);
    for (int i = n - 3 + 1; i <= n; i++) {
        cout << d[i].second << " ";
    }
    return 0;
}

