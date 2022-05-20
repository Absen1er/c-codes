#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("XUCXAC.inp","r",stdin);
    freopen("XUCXAC.out","w",stdout);
    long long n;
    cin >> n;
    long long result = (n / 4) * 14;
    n %= 4;
    if (n == 1) result += 1;
    if (n == 2) result += 5;
    if (n == 3) result += 11;
    cout << result;
    return 0;
}