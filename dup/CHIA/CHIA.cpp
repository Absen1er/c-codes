#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("CHIA.inp","r",stdin);
    freopen("CHIA.out","w",stdout);
    long long a, b, k, r;
    cin >> a >> b >> k;
    for (int i = 1; i <= k; i++) { 
        r = a % b;
        a = r * 10;
    }
    cout << a / b;  
    return 0;
}