#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int check[1000001];

int main() {
    freopen("SAMEPAIR.inp","r",stdin);
    freopen("SAMEPAIR.out","w",stdout);
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
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        int x = i, t = 1;
        while (x > 1) {
            int y = check[x];
            t = t * y;
            while (x % y == 0) {
                x /= y;
            }
        }
        prime.push_back(t);
    }
    long long dem = 0;
    map<int, int> ts;
    for (int i = 0; i < prime.size(); i++) {
        ts[prime[i]]++;
    }
    for (auto i = ts.begin(); i != ts.end(); ++i) {
        dem += (i->second * (i->second - 1)) / 2;
    }
    cout << dem;
    return 0;
}