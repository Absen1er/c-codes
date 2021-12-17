#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main() {
    freopen("POSIPROD.inp","r",stdin);
    freopen("POSIPROD.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int demko = 0, dempos = 0, demneg = 0;
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x > 0) dempos++;
        if (x == 0) demko++;
        if (x < 0) demneg++;
    }
    if (demko > 0) {
        cout << "-1";
        return 0;
    }
    cout << min(dempos, demneg);
    return 0;
}