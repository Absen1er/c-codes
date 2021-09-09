#include <iostream>

using namespace std;

string nhan(string s1, long long s2) {
    string s = "";
    int nho = 0;
    for (int i = s1.size() - 1; i >= 0; i--) {
        int cs = int(s1[i] - '0');
        nho = cs * s2 + nho;
        s = char((nho % 10) + '0') + s;
        nho /= 10;
    }
    while (nho > 0) {
        s = char(nho % 10 + '0') + s;
        nho /= 10;
    }

    return s;
}

string giaithua(int n) {
    string kq = "1";
    for (int i = 1; i <= n; i++) {
        kq = nhan(kq, i);
    }

    return kq;
}

int main() {
    freopen("GT.inp","r",stdin);
    freopen("GT.out","w",stdout);
    int N;
    cin >> N;
    cout << giaithua(N);
    return 0;
}
