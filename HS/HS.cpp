#include<iostream>

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

int main(){
    freopen("HS.inp","r",stdin);
    freopen("HS.out","w",stdout);
    int n;
    cin >> n;
    string a[202][202];
    a[0][0] = a[1][0] = a[1][1] = "1";
    for (int i = 2; i <= n; i++) {
        a[i][0] = a[i][i] = "1";
        for (int j = 1; j < i; j++) {
            a[i][j] = cong(a[i - 1][j - 1], a[i - 1][j]);
        }
    }
    for (int i = 0; i <= n; i++) {
        cout << a[n][i] << endl;
    }
    
    return 0;
}