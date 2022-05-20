#include <bits/stdc++.h>

using namespace std;

string tostring(long long n) {
    string result = "";
    while (n > 0) {
        result = char(n % 10 + '0') + result;
        n /= 10;
    }
    return result;
}

bool test(string s) {
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != '9') return false;
    }
    return true;
}

int main() {
    freopen("TIMSO.inp","r",stdin);
    freopen("TIMSO.out","w",stdout);
    long long n;
    cin >> n;
    string newN = tostring(n);
    if (newN.size() == 1) {
        cout << newN;
        return 0;
    }
    if (test(newN)) {
        cout << newN;
        return 0;
    }
    if (newN[0] == '1') {
        cout << "9";
        for (int i = 2; i < newN.size(); i++) cout << "9";
    } else {
        cout << newN[0] - '0' - 1;
        for (int i = 1; i < newN.size(); i++) cout << "9";
    }
    return 0;
}