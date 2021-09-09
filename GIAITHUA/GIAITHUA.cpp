#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

string nhan(string s1, long long s2) {
    string s = "";
    int nho = 0;
    for (int i = s1.size() - 1; i >= 0; i--) {
        int cs = int(s1[i] - '0');
        nho = cs * s2 + nho;
        s = char((nho % 10) + '0') + s;
        nho /= 10;
    }
    while (nho > 0) {
        s = char(nho % 10 + '0') + s;
        nho /= 10;
    }

    return s;
}

int main() {
    freopen("GIAITHUA.inp","r",stdin);
    freopen("GIAITHUA.out","w",stdout);
    vector<pair<int, int>> a;
    vector<pair<int, int>> b;
    int i = 0, n, l = 0;
    while (cin >> n) {
        a.push_back(make_pair(n, i));
        b.push_back(make_pair(n, i));
        i++;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    string kq = "1";
    int t = i, tr = 0;
    for (int i = 0; i < t; i++) {
        for (int j = tr + 1; j <= a[i].first; j++) {
            kq = nhan(kq, j);
        }
        long long so = 0;
        for (int i = 0; i < kq.size(); i++) {
            so += kq[i] - '0';
        }
        b[l].first = so;
        l++;
        tr = a[i].first;
    }
    sort(b.begin(), b.end(), [](auto &left, auto &right) { return left.second < right.second; });
    for (int i = 0; i < b.size(); i++) {
        cout << b[i].first << endl;
    }
    return 0;
}