#include <bits/stdc++.h>

using namespace std;

long long a[10001];

int main() {
    freopen("FIB_SEQ.inp","r",stdin);
    freopen("FIB_SEQ.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 3; i <= n; i++) {
        if (a[i - 1] + a[i - 2] != a[i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}