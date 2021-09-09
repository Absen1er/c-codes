#include <iostream>

using namespace std;

int main() {
    freopen("PRIZE.inp","r",stdin);
    freopen("PRIZE.out","w",stdout);
    string num1, num2;
    cin >> num1 >> num2;
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
    char ss = '0';
    for (int i = 0; i < kq.size(); i++) {
        if (kq[i] > ss) {
            ss = kq[i];
        }
    }
    cout << kq << endl << ss;
}