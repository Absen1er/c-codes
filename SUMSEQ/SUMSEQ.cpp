#include <iostream>
#include <climits>

using namespace std;

long long a[1000001], f[1000001];

int main() {
    freopen("SUMSEQ.inp","r",stdin);
    freopen("SUMSEQ.out","w",stdout);
    long long n, maxso = LLONG_MIN, tong = 0, dau, cuoi, cs;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    f[0] = a[0];
    for (int i = 1; i < n; i++) {
        if (f[i - 1] >= 0) {
            f[i] = f[i - 1] + a[i];
        } else {
            f[i] = a[i];
            cs = i;
        }
        if (maxso < f[i]) {
            maxso = f[i];
            dau = cs;
            cuoi = i;
        }
    }
    cout << dau + 1 << endl << cuoi + 1 << endl << maxso;
    return 0;
}