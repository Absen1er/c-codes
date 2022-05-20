#include <bits/stdc++.h>

using namespace std;

int countDivision(long long n) {
    int result = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            result += 2;
            if (n / i == i) result--;
        }
    }
    return result;
}

int main() {
    freopen("TIMSO.inp","r",stdin);
    freopen("TIMSO.out","w",stdout);
    long long l, r;
    cin >> l >> r;
    long long result = 0, currentCount = 0;
    for (long long i = l; i <= r; i++) {
        int count = countDivision(i);
        if (currentCount < count) {
            currentCount = count;
            result = i;
        }
    }
    cout << result << " " << currentCount;
    return 0;
}