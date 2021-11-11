#include <iostream>
#include <climits>
#include <vector>

using namespace std;

long long a[1001], f[1001];

int main() {
    freopen("MAXSUM.inp","r",stdin);
    freopen("MAXSUM.out","w",stdout);
    vector<long long> kq;
    long long n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    f[0] = a[0];
    long long maxso = f[0], t = 0, cs;
    for (int i = 1; i < n; i++) {
        if (f[i - 1] >= 0) {
            f[i] = f[i - 1] + a[i];
        } else {
            f[i] = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (maxso < f[i]) {
            maxso = f[i];
            cs = i;
        }
    }
    cout << maxso << endl;
    return 0;
}