#include <bits/stdc++.h>

using namespace std;

bool cp(int n) {
    int k = sqrt(n);
    return k * k == n;
}

int main() {
    freopen("PITAGO.inp","r",stdin);
    freopen("PITAGO.out","w",stdout);
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (cp(i * i + j * j) && sqrt(i * i + j * j) <= n) count++;
        }
    }
    cout << count;
    return 0;
}