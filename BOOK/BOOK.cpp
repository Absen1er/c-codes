#include <bits/stdc++.h>

using namespace std;

long long a[10];

int main() {
    freopen("BOOK.inp","r",stdin);
    freopen("BOOK.out","w",stdout);
    for (int i = 1; i <= 9; i++) a[i] = pow(10, i) - 1;
    for (int i = 1; i <= 9; i++) a[i] *= i;
    for (int i = 2; i <= 9; i++) a[i] += a[i - 1];
    long long n, result = 0;
    cin >> n;
    if (n <= 9) {
        cout << n + 3;
        return 0;
    }
    for (int i = 1; i <= 9; i++) {
        if (n >= a[i]) {
            result += (n - a[i]) / (i + 1);
            result += pow(10, i) - 1;
            break;
        }
    }
    cout << result + 3;
    return 0;
}