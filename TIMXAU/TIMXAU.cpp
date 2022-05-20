#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("TIMXAU.inp","r",stdin);
    freopen("TIMXAU.out","w",stdout);
    int count = 0, x;
    cin >> x;
    for (char i = 'A'; i <= 'Z'; i++) {
        for (char j = 'A'; j <= 'Z'; j++) {
            for (char k = 'A'; k <= 'Z'; k++) {
                if (i != j && j != k && i != k) {
                    count++;
                }
                if (count == x) {
                    cout << i << j << k;
                    return 0;
                }
            }
        }
    }
    return 0;
}