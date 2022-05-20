#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("TRATIEN.inp","r",stdin);
    freopen("TRATIEN.out","w",stdout);
    int n;
    cin >> n;
    for (int i = n / 100 + 1; i >= 0; i--) {
        for (int k = n / 1000 + 1; k >= 0; k--) {
            for (int j = n / 200 + 1; j >= 0; j--) {
                if (i * 100 + j * 200 + k * 1000 == n) {
                    cout << i << "x100+" << j << "x200+" << k << "x1000" << '\n';
                }
            }
        }
    }
    return 0;
}