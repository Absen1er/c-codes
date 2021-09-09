#include <iostream>

using namespace std;

string cong(string num1, string num2) {
    string kq = "";
    int so = 0;
    while (num1.size() < num2.size()) num1 = '0' + num1;
    while (num1.size() > num2.size()) num2 = '0' + num2;
    int n = num1.size();
    for (int i = n - 1; i >= 0; i--) {
        so = (num1[i] - '0') + (num2[i] - '0') + so;
        kq = char((so % 10) + '0') + kq;
        so /= 10;
    }
    if (so > 0) {
        kq = '1' + kq;
    }

    return kq;
}

int main() {
    freopen("fibo.inp","r",stdin);
    freopen("fibo.out","w",stdout);
    int n;
    cin >> n;
    string f[1005];
    f[1] = "1", f[2] = "1";
    for (int i = 3; i <= n; i++) {
        f[i] = cong(f[i - 1], f[i - 2]);
    }
    cout << f[n];
    return 0;
}