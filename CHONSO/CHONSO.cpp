#include <bits/stdc++.h>

using namespace std;

long long a[10001], f[10001];

int main() {
    freopen("CHONSO.inp","r",stdin);
    freopen("CHONSO.out","w",stdout);
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (long long i = 1; i <= n; i ++) {
        f[i] = f[i - 1] + a[i - 1];
    }
    for (long long i = 1; i <= n; i++) {
        for (long long j = i; j <= n; j ++) {
            if ((f[j] - f[i - 1]) % n == 0) {
                for (long long k = i - 1; k < j; k++) {
                    cout << a[k] << " ";
                }
                return 0;
            }
        }
    }
 
    return 0;
}