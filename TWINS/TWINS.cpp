#include <bits/stdc++.h>

using namespace std;

bool check[1000001];

int main() {
    freopen("TWINS.inp","r",stdin);
    freopen("TWINS.out","w",stdout);
    memset(check, true, sizeof(check));
    check[0] = check[1] = false;
    for (int i = 2; i <= 1000000; i++) {
        if (check[i]) {
            for (int j = i + i; j <= 1000000; j += i) {
                check[j] = false;
            }
        }
    }
    int n, k, count = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        if (i - k > 0) {
            if (check[i] && check[i - k]) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}

