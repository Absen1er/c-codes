#include <bits/stdc++.h>

using namespace std;

string c[101][101];

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
    freopen("MONAN.inp","r",stdin);
    freopen("MONAN.out","w",stdout);
    for (int i = 0; i <= 100; i++) {
        for (int j = i; j <= 100; j++) {
            if (i == 0 || i == j) c[i][j] = "1";
            else c[i][j] = cong(c[i][j - 1], c[i - 1][j - 1]);
        }
    }
    long long n;
    string result = "0";
    cin >> n;
    for (long long i = 2; i <= n; i += 2) result = cong(result, c[i][n]);
    cout << result;
    return 0;
}