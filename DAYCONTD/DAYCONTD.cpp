#include <iostream>
#include <unordered_map>
#include <cstring>

using namespace std;

int main() {
    freopen("DAYCONTD.inp","r",stdin);
    freopen("DAYCONTD.out","w",stdout);
    long long n, a[100001], f[100001], maxso = -1, cs;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    f[0] = 1;
    for (int i = 1; i < n; i++) {
      if (a[i - 1] * a[i] < 0) {
        f[i] = f[i - 1] + 1;
      } else {
        f[i] = 1;
      }
      if (maxso < f[i]) {
          maxso = f[i];
          cs = i;
      }
    }
    if (maxso == 1) {
      cout << "-1" << endl;
      return 0;
    }
    cout << maxso << endl;
    for (int i = cs - maxso + 1; i <= cs; i++) {
        cout << a[i] << " ";
    }
    return 0;
}