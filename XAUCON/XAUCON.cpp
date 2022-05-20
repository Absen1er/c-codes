#include <bits/stdc++.h>

using namespace std;

bool helper(string x, string y) {
    for (int i = 0; i < x.size(); i++) {
        if (y.find(x[i]) == string::npos) return false;
        else {
            string temp = y.substr(y.find(x[i]) + 1, y.size() - y.find(x[i]) - 1);
            y = temp;
        }
    }
    return true;
}

int main() {
    freopen("XAUCON.inp","r",stdin);
    freopen("XAUCON.out","w",stdout);
    string x, y;
    cin >> x >> y;
    if (x.size() > y.size()) {
        cout << "KHONG";
        return 0;
    }
    if (helper(x, y)) cout << "CO";
    else cout << "KHONG";
    return 0;
}