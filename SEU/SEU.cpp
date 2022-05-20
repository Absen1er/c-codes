#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("SEU.inp","r",stdin);
    freopen("SEU.out","w",stdout);
    long long a, b;
    cin >> a >> b;
    cout << max((a + 1) / 2, (b + 1) / 2) << " " << min(a, b);
    return 0;
}