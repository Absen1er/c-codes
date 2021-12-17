#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string rev(string s, int start, int end) {
    for (int i = start; i < end / 2; i++) {
        swap(s[i], s[end - i - 1]);
    }

    return s;
}

int main() {
    freopen("REVERSE.inp","r",stdin);
    freopen("REVERSE.out","w",stdout);
    string s;
    getline(cin, s);
    int m, a;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> a;
        s = rev(s, a - 1, s.size() - a + 1);
    }
    cout << s;
    return 0;
}