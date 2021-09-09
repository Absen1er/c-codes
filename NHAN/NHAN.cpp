#include <iostream>

using namespace std;

string nhan(string s1, long long s2) {
    string s = "";
    int nho = 0;
    for (int i = s1.size() - 1; i >= 0; i--) {
        int cs = int(s1[i] - '0');
        nho = cs * s2 + nho;
        s = char(nho % 10 + '0');
        nho /= 10;
    }
    while (nho > 0) {
        s = char(nho % 10 + '0') + s;
        nho /= 10;
    }

    return s;
}


int main() {
    freopen("NHAN.inp","r",stdin);
    freopen("NHAN.out","w",stdout);
    string s1;
    long long s2;
    cin >> s1 >> s2;
    cout << nhan(s1, s2);
    return 0;
}