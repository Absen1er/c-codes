#include <bits/stdc++.h>

using namespace std;

int xoa(string s1, string s2) {
    int ds1[26] = {0}, ds2[26] = {0};
    for (int i = 0; i < s1.size(); i++) {
        ds1[s1[i] - 'a']++;
    }
    for (int i = 0; i < s2.size(); i++) {
        ds2[s2[i] - 'a']++;
    }
    int kq = 0;
    for (int i = 0; i < 26; i++) {
        kq += abs(ds1[i] - ds2[i]);
    }

    return kq;
}

int main() {
    freopen("DAOKT.inp","r",stdin);
    freopen("DAOKT.out","w",stdout);
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        int k1 = xoa(s1, s2), k2 = xoa(s2, s1);
        cout << min(k1, k2) << endl;
    }
    return 0;
}