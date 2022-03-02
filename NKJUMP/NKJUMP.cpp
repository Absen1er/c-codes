#include <bits/stdc++.h>

using namespace std;

int A[1001], f[1001];

int main() {
    freopen("NKJUMP.inp","r",stdin);
    freopen("NKJUMP.out","w",stdout);
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    sort(A + 1, A + N + 1);
    int kq = 1;
    f[1] = 1, f[2] = 1;
    for (int i = 3; i <= N; i++) {
        f[i] = 1;
        int start = 1, end = i - 1;
        while (start < end) {
            if (A[start] + A[end] > A[i]) end--;
            else if (A[start] + A[end] < A[i]) start++;
            else {
                if (f[i] < f[start] + 1) f[i] = f[start] + 1;
                if (f[i] < f[end] + 1) f[i] = f[end] + 1;
                start++;
                end--;
            }
        }
        kq = max(f[i], kq);
    }
    cout << kq;
    return 0;
}