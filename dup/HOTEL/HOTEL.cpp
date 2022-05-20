#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("HOTEL.inp","r",stdin);
    freopen("HOTEL.out","w",stdout);
    int n, result = INT_MAX, a2 = 0, a3 = 0;
    cin >> n;
    for (int i = 0; i <= n / 2 + 1; i++) {
        int j = n - i;
        if (i % 2 == 0 && j % 3 == 0) {
            if (result > i / 2 + j / 3) {
                result = i / 2 + j / 3;
                a2 = i / 2;
                a3 = j / 3;
            }
        }
    }
    cout << a2 << " " << a3;
    return 0;
}