#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int check[1000001];

int main() {
    freopen("SQRNUM.inp","r",stdin);
    freopen("SQRNUM.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    check[1] = 1;
    for (int i = 2; i <= 1000000; i++) {
        check[i] = i;
    }
    for (int i = 4; i <= 1000000; i += 2) {
        check[i] = 2;
    }
    for (int i = 3; i * i <= 1000000; i++) {
        if (check[i] == i) {
            for (int j = i * i; j <= 1000000; j += i) {
                if (check[j] == j) {
                    check[j] = i;
                }
            }
        }
    }
    vector<int> prime;
    map<int, int> m;
    int n;
    cin >> n;
    int x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        while (x > 1) {
            prime.push_back(check[x]);
            m[check[x]]++;
            x /= check[x];
        }
        int chan = 0;
        for (auto i = m.begin(); i != m.end(); ++i) {
            if (i->second % 2 == 0) {
                chan++;
            }
        }
        if (chan == m.size()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}