#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        long long ds1[26], ds2[26];
        memset(ds1, 0, sizeof(ds1));
        memset(ds2, 0, sizeof(ds2));
        for (int i = 0; i < s1.size(); i++) {
            ds1[s1[i] - 'a'] = 1;
        }
        for (int i = 0; i < s2.size(); i++) {
            ds2[s2[i] - 'a'] = 1;
        }
        int d = 0;
        for (int i = 0; i < 26; i++) {
            if (ds1[i] == 1 && ds2[i] == 1) {
                d++;
            }
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
    }
    return 0;
}