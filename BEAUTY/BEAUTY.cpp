#include <bits/stdc++.h>

using namespace std;

bool isBeauty(int n) {
    int sum = 0, count = 0;
    while (n > 0) {
        sum += n % 10;
        count++;
        n /= 10;
    }
    return sum % count == 0;
}

int main() {
    freopen("BEAUTY.inp","r",stdin);
    freopen("BEAUTY.out","w",stdout);
    int n, result = 1;
    cin >> n;
    while (n > 0) {
        if (isBeauty(result)) n--;
        if (n == 0) break;
        result++;
    }
    cout << result;
    return 0;
}