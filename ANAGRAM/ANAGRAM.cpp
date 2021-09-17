#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    freopen("ANAGRAM.inp","r",stdin);
    freopen("ANAGRAM.out","w",stdout);
    int n;
    cin >> n;
    string s;
    vector<string> v;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        v.push_back(s);
    }
    int kq = 0;
    unordered_map<string, int> dem;
    for (int i = 0; i < n; i++) {
        sort(v[i].begin(), v[i].end());
        dem[v[i]] += 1;
        kq = max(kq, dem[v[i]]);
    }

    cout << kq;
}