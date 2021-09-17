#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isAnagram(string s1, string s2) {
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    return s1 == s2;
}

int main() {
    freopen("MULTIGRAM.inp","r",stdin);
    freopen("MULTIGRAM.out","w",stdout);
    string s;
    cin >> s;
    for (int i = 1; i <= s.size() / 2; i++) {
        if (s.size() % i == 0) {
            string x = s.substr(0, i);
            string s2 = "";
            for (int j = 1; j <= s.size() / i; j++) {
                s2 = s2 + x;
            }
            if (isAnagram(s, s2) == true) {
                cout << x;
                return 0;
            }
        }
    }

    cout << "-1";
    return 0;
}