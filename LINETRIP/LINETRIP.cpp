#include <iostream>
#include <algorithm>

using namespace std;

int A[101];

int main() {
    freopen("LINETRIP.inp","r",stdin);
    freopen("LINETRIP.out","w",stdout);
    int N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cout << abs(A[0]) + abs(A[0] + A[N - 1]) + abs(A[N]);
    return 0;
}