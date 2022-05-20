#include <bits/stdc++.h>

using namespace std;

string tostring(int n) {
    string result = "";
    while (n > 0) {
        result = char((n % 10) + '0') + result;
        n /= 10;
    }
    return result;
}

bool helper(int n) {
    int sumEven = 0, sumOdd = 0;
    string s = tostring(n);
    for (int i = 0; i < s.size(); i++) {
        if ((i + 1) % 2 == 0) sumEven += s[i] - '0';
        else sumOdd += s[i] - '0';
    }
    return sumEven == sumOdd;
}

int main() {
    freopen("VEMAYMAN.inp","r",stdin);
    freopen("VEMAYMAN.out","w",stdout);
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (helper(i)) {
            count++;
        }
    }
    cout << count;
    return 0;
}