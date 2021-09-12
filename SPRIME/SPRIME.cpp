#include <iostream>
#include <math.h>

using namespace std;

bool kt(int N) {
    int t = 0;
    while (N > 0) {
        t += N % 10;
        N /= 10;
    }
    return t % 5 == 0;
}
 
int main() {
    freopen("SPRIME.inp","r",stdin);
    freopen("SPRIME.out","w",stdout);
    int N = 3000000;
    bool check[3000001];
    for (int i = 2; i <= N; i++) {
        check[i] = true;
    }
    for (int i = 2; i <= N; i++) {
        if (check[i] == true) {
            for (int j = 2 * i; j <= N; j += i) {
                check[j] = false;
            }
        }
    }
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int L, R, dem = 0;
        cin >> L >> R;
        for (int j = L; j <= R; j++) {
            if (check[j] == true && kt(j) == true) {
                dem++;
            }
        }
        cout << dem << endl;
        dem = 0;
    } 
    return 0;
}