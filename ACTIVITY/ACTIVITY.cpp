#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
    return a.second.first < b.second.first;
}

int main() {
    freopen("ACTIVITY.inp","r",stdin);
    freopen("ACTIVITY.out","w",stdout);
    vector<int> kq;
    pair<int, pair<int, int>> a[10001];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        cin >> a[i].second.first;
        a[i].second.second = i;
    }
    sort(a, a + n, cmp);
    int dem = 0;
    int x = a[0].first;
    for (int i = 0; i < n; i++) {
        if (x <= a[i].first) {
            dem++;
            x = a[i].second.first;
            kq.push_back(a[i].second.second);
        }
    }
    cout << dem << endl;
    for (int i = 0; i < kq.size(); i++) {
        cout << kq[i] + 1 << endl;
    }
    return 0;
}