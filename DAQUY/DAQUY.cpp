#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("DAQUY.inp","r",stdin);
    freopen("DAQUY.out","w",stdout);
    int a, m1, k1, b, m2, k2;
    string x1, x2, s1 = "", s2 = "";
    cin >> a;
    for (int i = 1; i <= a; i++) {
        cin >> m1 >> x1 >> k1;
        for (int j = 1; j <= k1; j++) {
            s1 += x1;
        }
    }
    cin >> b;
    for (int i = 1; i <= b; i++) {
        cin >> m2 >> x2 >> k2;
        for (int j = 1; j <= k2; j++) {
            s2 += x2;
        }
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2) cout << "CO";
    else cout << "KHONG";
    cout << '\n' << s1.size() << " " << s2.size();
    return 0;
}