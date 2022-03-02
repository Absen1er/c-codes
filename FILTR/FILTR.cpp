#include <bits/stdc++.h>

using namespace std;

bool ngto(int n) {
    for (int i = 2; i <= sqrt(n); i++) if (n % i == 0) return false;
    return true;
}

int prime(int n) {
    for (int i = n; i >= 2; i--) {
        if (ngto(i)) {
            return i;
        }
    }
}

int smallestDivisor(int n) {
    if (n % 2 == 0) return 2;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return i;
        }  
    }
    return n;
}

int main() {
    freopen("FILTR.inp","r",stdin);
    freopen("FILTR.out","w",stdout);
    int l, r;
    cin >> l >> r;
    int kq = prime(r);
    if (kq >= l) {
        cout << kq - 1;
        return 0;
    }
    int so = smallestDivisor(l);
    for (int i = l + 1; i <= r; i++) {
        so = max(so, smallestDivisor(i));
    }
    cout << so - 1;
    return 0;
}

