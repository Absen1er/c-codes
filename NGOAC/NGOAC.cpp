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
        if (x.empty()) return false;
        if (s[i] == ')') {
            c = x.top();
            x.pop();
            if (c == '{' || c == '[') return false;
        }
        if (s[i] == ']') {
            c = x.top();
            x.pop();
            if (c == '(' || c == '{') return false;
        }
        if (s[i] == '}') {
            c = x.top();
            x.pop();
            if (c == '(' || c == '[') return false;
        }
    }

    return x.empty();
}

int main() {
    freopen("NGOAC.inp","r",stdin);
    freopen("NGOAC.out","w",stdout);
    string s;
    cin >> s;
    if (checkBrackets(s)) cout << "CO";
    else cout << "KHONG";
    return 0;
}