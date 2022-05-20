#include <bits/stdc++.h>

using namespace std;

const int MAX = 10e8;

int main() {
    freopen("HAMMING.inp","r",stdin);
    freopen("HAMMING.out","w",stdout);
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 1; i <= MAX / 2; i *= 2) {
        for (int j = i; j <= MAX / 3; j *= 3) {
            for (int k = j; k <= MAX / 5; k *= 5) {
                v.push_back(k);
            }
        }
    }
    sort(v.begin(), v.end());
    cout << v[n];
    return 0;
}