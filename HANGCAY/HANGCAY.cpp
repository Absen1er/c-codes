#include <bits/stdc++.h>

using namespace std;

long long a[1000001]; 
long long n, m, maxso, tong = 0;

long long binarysearch() {
    long long d, c, g, kq, s;
    d = 0;
    c = maxso;
    kq = -1;
    while (d < c) {
        g = (d + c + 1) / 2;
        s = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i] > g) {
                s = s + a[i] - g;
            }
        }
        if (s >= m) {
            d = g;
        } else {
            c = g - 1;
        }
    }
    return d;
}

int main() {
    freopen("HANGCAY.inp","r",stdin);
    freopen("HANGCAY.out","w",stdout);
    maxso = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        maxso = max(maxso, a[i]);
    }
    cout << binarysearch();
    return 0;
}