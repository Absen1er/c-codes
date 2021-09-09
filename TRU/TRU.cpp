#include <iostream>

using namespace std;

int main() {
    freopen("TRU.inp","r",stdin);
    freopen("TRU.out","w",stdout);
    string num1, num2;
    cin >> num1 >> num2;
    string kq = "";
    int so = 0, nho = 0;
    while (num1.size() < num2.size()) num1 = '0' + num1;
    while (num1.size() > num2.size()) num2 = '0' + num2;
    int n = num1.size();
    for (int i = n - 1; i >= 0; i--) {
        if (num1[i] < num2[i]) {
            so = 10 + (num1[i] - '0') - (num2[i] - '0') - nho;
            nho = 1;
        } else {
            if ((num1[i] - '0') - (num2[i] - '0') < nho) {
                so = 10 + (num1[i] - '0') - (num2[i] - '0') - nho;
                nho = 1;
            } else {
                so = (num1[i] - '0') - (num2[i] - '0') - nho;
            }
        }
        kq = char((so % 10) + '0') + kq;
        so /= 10;
    }
    while (kq[0] == '0' && kq.size() > 1 {
        kq.erase(0, 1);
    }
    cout << kq;
}
