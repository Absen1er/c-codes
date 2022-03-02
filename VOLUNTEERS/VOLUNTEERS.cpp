#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("VOLUNTEERS.inp","r",stdin);
    freopen("VOLUNTEERS.out","w",stdout);
    int m, a, b, n;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b >> n;
        int s = a, t = 0;
        while (s < n) {
            t += b;
            s += s / a;
        }
        cout << t << '\n';
    }
    return 0;
}