#include <bits/stdc++.h>

using namespace std;

bool check[1000001];

int main() {
    freopen("TONGNT.inp","r",stdin);
    freopen("TONGNT.out","w",stdout);
    memset(check, true, sizeof(check));
    check[0] = check[1] = false;
    for (int i = 2; i <= 1000000; i++) {
        if (check[i]) {
            for (int j = i + i; j <= 1000000; j += i) {
                check[j] = false;
            }
        }
    }
    int n;
    cin >> n;
    long long kq = 0;
    for (int i = 1; i <= n; i++) {
        if (check[i]) {
            kq += i;    
        }
    }
    cout << kq;
    return 0;
}