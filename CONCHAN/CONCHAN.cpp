#include <iostream>
#include <unordered_map>
#include <cstring>

using namespace std;

int main() {
    freopen("CONCHAN.inp","r",stdin);
    freopen("CONCHAN.out","w",stdout);
    long long n, a[100001], f[100001], maxso = -1, cs;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    memset(f, 0, sizeof(f));
    if (a[0] % 2 == 0) {
        f[0] = 1;
    }
    for (int i = 1; i < n; i++) {
      if (a[i] % 2 == 0) {
        f[i] = f[i - 1] + 1;
      }
      else {
        f[i] = 0;
      }
      if (maxso < f[i]) {
          maxso = f[i];
          cs = i;
      }
    }
    if (maxso == 0) {
        cout << "-1";
        return 0;
    }
    cout << maxso << endl;
    for (int i = cs - maxso + 1; i <= cs; i++) {
        cout << a[i] << " ";
    }
    return 0;
}