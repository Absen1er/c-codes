#include <iostream>
#include <cstring>

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
    freopen("CARROT.inp","r",stdin);
    freopen("CARROT.out","w",stdout);
    int k, n;
    while (cin >> k >> n) {
        string a[301];
        for (int i = 0; i < n; i++) {
            a[i] = "0";
        }
        a[0] = "1";
        for (int i = 1; i <= n; i++) {
            for (int j = max(i - k, 0); j <= i - 1; j++) {
                a[i] = cong(a[i], a[j]);
            }
        }
        cout << a[n] << endl;
    }
    return 0;
}