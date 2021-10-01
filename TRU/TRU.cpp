#include <iostream>
#include <algorithm>

using namespace std;

bool isSmaller(string str1, string str2)
{
    int n1 = str1.size(), n2 = str2.size();
 
    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;
 
    for (int i = 0; i < n1; i++)
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
 
    return false;
}

int main() {
    bool kt = true;
    string num1, num2;
    cin >> num1 >> num2;
    if (isSmaller(num1, num2)) {
        swap(num1, num2);
        kt = false;
    }
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
    }
    while (kq[0] == '0' && kq.size() > 1) {
        kq.erase(0, 1);
    }
    reverse(kq.begin(), kq.end());
    if (kt == false) {
        cout << "-" << kq;
    } else {
        cout << kq;
    }
}
