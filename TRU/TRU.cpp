#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    freopen("TRU.inp","r",stdin);
    freopen("TRU.out","w",stdout);
    string num1, num2;
    cin >> num1 >> num2;
    string kq = "";
    int so = 0, nho = 0;
    int n1 = num1.size(), n2 = num2.size(), diff = n1 - n2;
    for (int i = n2 - 1; i >= 0; i--) {
        so = ((num1[i + diff] - '0') - (num2[i] -'0') - nho);
        if (so < 0) {
            so = so + 10;
            nho = 1;
        } else {
            nho = 0;
        }
        kq.push_back(so + '0');
    }
    for (int i = n1 - n2 - 1; i >= 0; i--) {
        if (num1[i] == '0' && nho) {
            kq.push_back('9');
            continue;
        }
        int sub = ((num1[i] - '0') - nho);
        if (i > 0 || sub > 0) {
            kq.push_back(sub + '0');
        }
        nho = 0;
    while (kq[0] == '0' && kq.size() > 1) {
        kq.erase(0, 1);
    }
    reverse(kq.begin(), kq.end());
    cout << kq;
}
