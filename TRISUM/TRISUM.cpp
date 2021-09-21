#include <bits/stdc++.h>

using namespace std;

int A[5005], ts[10005];

int main() {
    freopen("TRISUM.inp","r",stdin);
    freopen("TRISUM.out","w",stdout);
    int N;
    cin >> N;
    long long kq = 0;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    sort(A + 1, A + N + 1);
    ts[A[1] + A[2]] = 1;
    for (int k = 3; k <= N; k++) {
        kq = kq + ts[A[k]];
        for (int j = 1; j < k; j++) {
            ts[A[k] + A[j]]++;
        }
    }
    cout << kq;
    return 0;
}