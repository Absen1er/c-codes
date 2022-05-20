#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[100001];
int f[100001];

int main() {
    freopen("HSG.inp","r",stdin);
    freopen("HSG.out","w",stdout);
    long long n, c, k, result = 0;
    cin >> n >> c >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    for (int i = 1; i <= n; i++) {
        if (a[i].first >= k) {
            f[i] = 0;
            continue;
        } else {
            if (a[i].second == 0) {
                f[i] = c + 1;
               continue; 
            } else {
                f[i] = (k - a[i].first) / a[i].second;
                if ((k - a[i].first) % a[i].second != 0) f[i]++;
            }
        }
    }
    sort(f + 1, f + n + 1);
    int i = 1;
    while (i <= n && result + f[i] <= c) {
        result += f[i];
        i++;
    }
    cout << i - 1;
    return 0;
}