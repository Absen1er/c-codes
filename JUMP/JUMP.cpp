#include <bits/stdc++.h>

using namespace std;

int A[30001], F[30001];

int main() {
    freopen("JUMP.inp","r",stdin);
    freopen("JUMP.out","w",stdout);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    F[0] = 0;
    F[1] = abs(A[0] - A[1]);
    for (int i = 2; i < N; i++) {
        F[i] = min(F[i - 1] + abs(A[i] - A[i - 1]), F[i - 2] + 3 * abs(A[i] - A[i - 2]));
    }
    cout << F[N - 1];
    return 0;
}