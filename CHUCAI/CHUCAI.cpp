#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    freopen("CHUCAI.inp","r",stdin);
    freopen("CHUCAI.out","w",stdout);
    string t, s = "";
    while (getline(cin, t)) {
        s = s + t;
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            s.erase(i, 1);
        }
    }
    vector<char> a;
    for (int i = 0; i < s.size(); i++) {
        if (find(a.begin(), a.end(), s[i]) != a.end()) {
            continue;
        } else {
            a.push_back(s[i]);
        }
    }
    sort(a.begin(), a.end());
    for (auto i : a) {
        cout << i << " ";
    }
    return 0;
}