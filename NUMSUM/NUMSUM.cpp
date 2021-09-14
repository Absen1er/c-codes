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
    //freopen("NUMSUM.inp","r",stdin);
    //freopen("NUMSUM.out","w",stdout);
    int N;
    cin >> N;
    string a[100001], t = "0", s;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            string so = a[i] + a[j];
            t = cong(t, so);
        }
    }
    cout << t;
    return 0;
}