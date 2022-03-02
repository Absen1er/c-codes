#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("HOTEL.inp","r",stdin);
    freopen("HOTEL.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a2 = 0, a3 = 0, minso = INT_MAX;
    for (int i = 0; i <= n / 3 + 1; i++) {
        int n2 = (n - i * 3 + 1) / 2;
        if (minso > i + n2) {
            minso = i + n2;
            a2 = n2;
            a3 = i;
        }
    }
    cout << a2 << " " << a3;
    return 0;
}