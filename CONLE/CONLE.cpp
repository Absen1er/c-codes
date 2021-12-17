#include <iostream>
#include <cstring>
#include <climits>

long long a[1000001], f[1000001];

using namespace std;

int main() {
    freopen("CONLE.inp","r",stdin);
    freopen("CONLE.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, maxso = LLONG_MIN, cs;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    memset(f, 0, sizeof(f));
    if (a[0] % 2 == 1) {
        f[0] = 1;
    }
    for (int i = 1; i < n; i++) {
        if (a[i] % 2 != 0) {
            f[i] = f[i - 1] + 1;
        } else {
            f[i] = 0;
        }
        if (maxso < f[i]) {
            maxso = f[i];
            cs = i;
        }
    }
    if (maxso == 0) {
        cout << "-1";
        return 0;
    }
    cout << maxso << endl;
    for (int i = cs - maxso + 1; i <= cs; i++) {
        cout << a[i] << " ";
    }
    return 0;
}