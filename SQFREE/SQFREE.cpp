#include <iostream>

using namespace std;

int main() {
    freopen("SQFREE.inp","r",stdin);
    freopen("SQFREE.out","w",stdout);
    long long m;
    while (cin >> m) {
        long long kq = 1;
        for (int i = 2; i * i <= m; i++) {
            if (m % i == 0) {
                kq *= i;
                while (m % i == 0) {
                    m /= i;
                }
            }
        }
        if (m > 1) {
            kq *= m;
        }
        cout << kq << endl;
    }
    return 0;
}