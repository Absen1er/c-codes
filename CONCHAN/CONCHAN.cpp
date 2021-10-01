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
    if (a[0] % 2 == 0) {
      f[0] = 1;
    } else {
      f[0] = 0;
    }
    for (int i = 1; i < n; i++) {
      if (f[i] % 2 == 0 && f[i - 1] % 2 == 0) {
        f[i] = f[i - 1] + 1;
      }
       else {
        f[i] = 1;
       }
       if (maxso < f[i]) {
          maxso = f[i];
          cs = i;
      }
    }
    cout << maxso << endl;
    for (int i = cs - maxso + 1; i <= cs; i++) {
        cout << a[i] << " ";
    }
    return 0;
}