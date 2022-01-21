#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    freopen("TINH.inp","r",stdin);
    freopen("TINH.out","w",stdout);
    long long n;
    map<long long, int> m;
    cin >> n;
    long long kq = n;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            m[i]++;
            n /= i;
        }
    }
    long long tu = 1, mau = 1;
    for (auto i : m) {
        long long num = i.first - 1, denum = i.first;
        tu *= num;
        mau *= denum;
    }
    kq *= tu;
    long long ucln = gcd(kq, mau);
    kq /= ucln;
    mau /= ucln;
    long double res = (double)(kq) / (double)(mau);
    cout << fixed << setprecision(16) << (long long)(res);
    return 0;
}