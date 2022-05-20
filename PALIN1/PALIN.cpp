#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s) {
    string temp = s;
    reverse(temp.begin(), temp.end());
    return s == temp;
}

int main() {
    freopen("PALIN.inp","r",stdin);
    freopen("PALIN.out","w",stdout);
    string s;
    cin >> s;
    for (int i = 1; i <= s.size(); i++) {
        if (isPalindrome(s)) {
            cout << "yes";
            return 0;
        }
        char c = s[s.size() - 1];
        s.erase(s.size() - 1, 1);
        s = c + s;
    }
    cout << "no";
    return 0;
}

