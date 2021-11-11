#include <iostream>

using namespace std;

int main() {
    freopen("DEMSO.inp","r",stdin);
    freopen("DEMSO.out","w",stdout);
    int N, duong = 0, am = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        string s;
        cin >> s;
        if (s[0] == '-') {
            am++;
        }
        if (s[0] != '0' && s[0] != '-') {
            duong++;
        }
    }
    cout << am << " " << duong;
    return 0;
}