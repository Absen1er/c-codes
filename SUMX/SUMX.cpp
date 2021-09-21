#include <bits/stdc++.h>

using namespace std;

int ts[1000001];

int main() {
    freopen("SUMX.inp","r",stdin);
    freopen("SUMX.out","w",stdout);
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        ts[a] = 1;
    }
    cin >> x;
    int d = 0;
    for (int i = 1; i <= 1000000; i++) {
        if (ts[i] == 1) {
            if (x - i > 0 && ts[x - i] == 1) {
                d++;
            }
        }
    }
    cout << d / 2;
    return 0;
}