#include <iostream>
#include <string>

using namespace std;

int main() {
    freopen("COMPRESS.inp","r",stdin);
    freopen("COMPRESS.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin, s);
    for (int i = 1; i <= s.size(); i++) {
        if (s.size() % i == 0) {
            string x = s.substr(0, i);
            string y = "";
            for (int j = 1; j <= s.size() / i; j++) {
                y = y + x;
            }
            if (y == s) {
                cout << s.size() / i << x;
                return 0;
            }
        }
    }
    return 0;
}