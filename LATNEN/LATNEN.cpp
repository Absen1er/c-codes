#include <iostream>
#include <math.h>

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
    freopen("LATNEN.inp","r",stdin);
    freopen("LATNEN.out","w",stdout);
    int N;
    cin >> N;
    string A[201];
    A[1] = "1";
    A[2] = "2";
    for (int i = 3; i <= N; i++) {
        A[i] = cong(A[i - 1], A[i - 2]);
    }
    cout << A[N];
    return 0;
}