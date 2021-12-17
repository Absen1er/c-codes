#include <iostream>
#include <math.h>

using namespace std;

int main() {
    freopen("BEGIN9.inp","r",stdin);
    freopen("BEGIN9.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string A, B;
    cin >> A >> B;
    int a = A[A.size() - 1] - '0', b;
    B = '0' + B;
    long long kq;
    if (a == 0 || a == 1 || a == 5 || a == 6) {
        cout << a;
        return 0;
    } else if (a == 2 || a == 3 || a == 7 || a == 8) {
        b = (B[B.size() - 2] - '0') * 10 + (B[B.size() - 1] - '0');
        b = (b % 4 == 0) ? 4 : b % 4;
        kq = pow(a, b);
    } else {
        b = B[B.size() - 1] - '0';
        b = (b % 2 == 0) ? 2 : b % 2;
        kq = pow(a, b);
    }
    cout << kq % 10;
    return 0;
}