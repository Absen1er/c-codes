#include <bits/stdc++.h>

using namespace std;

bool cp(long long n) {
    long long k = sqrt(n);
    return k * k == n;
}

int main() {
    freopen("DEMUOC.inp","r",stdin);
    freopen("DEMUOC.out","w",stdout);
    long long n, a, chan = 0, le = 0;
    cin >> n;
    while (n--) {
        cin >> a;
        if (cp(a)) le++;
        else chan++;
    }
    cout << chan << " " << le;
    return 0;
}