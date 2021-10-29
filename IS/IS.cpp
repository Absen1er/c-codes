#include <bits/stdc++.h>

long long A[10001], W[10001], F[10001], t, maxso = -1;

using namespace std;

int main() {
    freopen("IS.inp","r",stdin);
    freopen("IS.out","w",stdout);
    int N, pos;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    for (int i = 1; i <= N; i++) {
        cin >> W[i];
    }
    F[1] = W[1];
    for (int i = 2; i <= N; i++) {
        t = 0;
        for (int j = 1; j < i; j++) {
            if (A[i] > A[j] && t < F[j]) {
                t = F[j];
            }
        }
        F[i] = t + W[i];
    }
    for (int i = 1; i <= N; i++) {
        if (F[i] > maxso) {
            maxso = F[i];
            pos = i;
        }
    }
    vector<long long> kq;
    while (pos > 0) {
        kq.push_back(pos);
        for (int i = pos - 1; i >= 0; i--) {
            if (A[pos] > A[i] && F[i] + W[pos] == F[pos]) {
                pos = i;
                break;
            }
        }
    }
    cout << kq.size() << endl;
    for (int i = kq.size() - 1; i >= 0; i--) {
        cout << kq[i] << " ";
    }
    return 0;
}