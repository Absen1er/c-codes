#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BENZINE.inp","r",stdin);
    freopen("BENZINE.out","w",stdout);
    int n;
    cin >> n;
    map<long long, int> v1, v2, v3;
    while (n--) {
        string a, b;
        int c, d;
        cin >> a >> b >> c >> d;
        if (c == 92) {
            v1[d]++;
        }
        if (c == 95)  {
            v2[d]++;
        }
        if (c == 98) {
            v3[d]++;
        }
    }
    if (v1.empty()) cout << 0 << " ";
    else cout << v1.begin()->second << " ";
    if (v2.empty()) cout << 0 << " ";
    else cout << v2.begin()->second << " ";
    if (v3.empty()) cout << 0 << " ";
    else cout << v3.begin()->second << " ";
    return 0;
}

