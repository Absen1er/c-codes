#include <iostream>
#include <math.h>

using namespace std;

int main() {
    freopen("BANBE.inp","r",stdin);
    freopen("BANBE.out","w",stdout);
    long long a, b, n = 0, m = 0;
    cin >> a >> b;
    for (int i = 1; i <= a / 2; i++) {
        if (a % i == 0) {
            n += i;
        }
    }
    for (int i = 1; i <= b / 2; i++) {
        if (b % i == 0) {
            m += i;
        }
    }
    if (a == m && b == n) {
        cout << "CO";
    } else {
        cout << "KHONG";
    }
    return 0;
}