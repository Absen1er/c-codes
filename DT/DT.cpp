#include <bits/stdc++.h>

using namespace std;

int l[100001], r[100001];

int main() {
    freopen("DT.inp","r",stdin);
    freopen("DT.out","w",stdout);
    int n, maxNumber = INT_MIN, minNumber = INT_MAX;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> l[i] >> r[i];
        minNumber = min(minNumber, l[i]);
        maxNumber = max(maxNumber, r[i]);
    }
    for (int i = 1; i <= n; i++) {
        if (minNumber == l[i] && maxNumber == r[i]) {
            cout << l[i] << " " << r[i];
            return 0;
        }
    }
    cout << -1;
    return 0;
}