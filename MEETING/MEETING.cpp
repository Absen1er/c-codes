#include <iostream>
#include <string>

using namespace std;

int main() {
    freopen("MEETING.inp","r",stdin);
    freopen("MEETING.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        if (s.find(c) == string::npos) {
            cout << s << endl;
        }
    }
    return 0;
}