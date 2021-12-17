#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

long long A[500005];

int main() {
    freopen("GROWING.inp","r",stdin);
    freopen("GROWING.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, D, L, R, K;
    cin >> N >> D;
    for (int i = 1; i <= D; i++) {
        cin >> L >> R >> K;
        A[L] += K;
        A[R + 1] -= K;
    }
    for (int i = 2; i <= N; i++) {
        A[i] += A[i - 1];
    }
    for (int i = 1; i <= N; i++) {
        cout << A[i] << " ";
    }
    return 0;
}