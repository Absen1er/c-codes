#include <iostream>
#include <algorithm>

using namespace std;

int A[100001];

int main() {
    freopen("NUMBER.inp","r",stdin);
    freopen("NUMBER.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    long long kq = 0, du;
    for (int i = 0; i < N; i++) {
        du = A[i] % 2;
        kq += A[i] / 2;
        if (A[i + 1] > 0) {
            A[i + 1] += du;
        }
    }
    cout << kq;
    return 0;
}