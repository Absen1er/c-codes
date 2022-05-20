#include <bits/stdc++.h>

using namespace std;

int tich(int n) {
    int result = 1;
    while (n > 0) {
        result *= n % 10;
        n /= 10;
    }

    return result;
}

int main() {
    freopen("PRODUCT.inp","r",stdin);
    freopen("PRODUCT.out","w",stdout);
    int l, r, count = 0;
    cin >> l >> r;
    for (int i = l; i <= r; i++) {
        if (tich(i) != 0 && i % tich(i) == 0) {
            count++;
        }
    }
    cout << count;
    return 0;
}