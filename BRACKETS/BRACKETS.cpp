#include <bits/stdc++.h>

using namespace std;

bool checkBrackets(string s) {
    stack<char> x;
    char c;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            x.push(s[i]);
            continue;
        }
        if (x.empty()) {
            return false;
        }
        if (s[i] == ')') {
            c = x.top();
            x.pop();
            if (c == '{' || c == '[') {
                return false;
            }
        }
        if (s[i] == ']') {
            c = x.top();
            x.pop();
            if (c == '(' || c == '{') {
                return false;
            }
        }
        if (s[i] == '}') {
            c = x.top();
            x.pop();
            if (c == '(' || c == '[') {
                return false;
            }
        }
    }
    return x.empty();
}

int main() {
    freopen("BRACKETS.inp","r",stdin);
    freopen("BRACKETS.out","w",stdout);
    string s;
    cin >> s;
    if (s == "") {
        cout << "Yes";
        return 0;
    }
    for (int i = 1; i <= s.size(); i++) {
        if (checkBrackets(s)) {
            cout << "Yes";
            return 0;
        }
        char c = s[s.size() - 1];
        s.erase(s.size() - 1, 1);
        s = c + s;
    }
    cout << "No";
    return 0;
}

