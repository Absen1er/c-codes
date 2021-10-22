#include <bits/stdc++.h>

long long f[40001];
const long long V[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

using namespace std;

int main() {
    freopen("LED.inp","r",stdin);
    freopen("LED.out","w",stdout);
    int S;
    cin >> S;
    f[0] = 0;
    for (int i = 1; i <= S; i++) {
        f[i] = -1;
        for (int j = 0; j <= 9; j++) {
            if (i >= V[j] && f[i - V[j]] >= 0) {
                f[i] = max(f[i], f[i - V[j]] + j);
            }
        }
    }
    cout << f[S];
    return 0;
}