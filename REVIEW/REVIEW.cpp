#include <bits/stdc++.h>

using namespace std;

string s[100001];
char c[100001];
int f[27];

int main() {
    freopen("REVIEW.inp","r",stdin);
    freopen("REVIEW.out","w",stdout);
    int k, n;
    cin >> k >> n;
    for (int i = 1; i <= k; i++) {
        cin >> s[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
    }
    vector<vector<string>> v(26);
    for (int i = 1; i <= k; i++) {
        v[s[i][0] - 97].push_back(s[i]);
    }
    for (int i = 0; i < 26; i++) {
        if (!v[i].empty()) sort(v[i].begin(), v[i].end());
    }
    for (int i = 1; i <= n; i++) {
        int temp = c[i] - 97;
        cout << v[temp][f[temp]] << '\n';
        f[temp] = f[temp] + 1;
        if (f[temp] == v[temp].size()) f[temp] = 0;
    }
    return 0;
}