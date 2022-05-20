#include <bits/stdc++.h>

using namespace std;

bool prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool sumSquare(int n) {
    int result = 0;
    while (n > 0) {
        int temp = n % 10;
        result += temp * temp;
        n /= 10;
    }
    return prime(result);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BEAUTY2.inp","r",stdin);
    freopen("BEAUTY2.out","w",stdout);
    vector<int> v;
    int num = 11;
    while (v.size() <= 10000) {
        if (sumSquare(num)) v.push_back(num);
        num++;
    }
    int n;
    while (cin >> n) {
        cout << v[n - 1] << '\n';
    }
    return 0;
}