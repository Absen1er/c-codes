#include <bits/stdc++.h>

using namespace std;

bool prime(long long n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) if (n % i == 0) return false;
    return true;
}

int main() {
    freopen("NTK.inp","r",stdin);
    freopen("NTK.out","w",stdout);
    long long n, k;
    cin >> n >> k;
    long long kq = n + 1, dem = 0;
    while (true) {
        if (prime(kq)) dem++;
        if (dem == k) break;
        kq++;
    }
    cout << kq;
    return 0;
}