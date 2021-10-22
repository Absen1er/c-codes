#include <bits/stdc++.h>

int A[20001], F[20001];

using namespace std;

int main() {
    freopen("TANGDAN.inp","r",stdin);
    freopen("TANGDAN.out","w",stdout);
    int N, kq = 1;
    vector<int> chiso;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    F[0] = 1;
    int to = A[0];
    for (int i = 1; i < N; i++) {
        F[i] = 0;
        for (int j = 0; j < i; j++) {
            if (A[i] >= A[j] && F[i] < F[j] + 1) {
                F[i] = F[j] + 1;
            }
        }
        kq = max(F[i], kq);
    }
    cout << kq << endl;
    for (int i = N - 1; i >= 0; i--) {
        if (F[i] == kq) {
            chiso.push_back(i);
            --kq;
        }
    }
    reverse(chiso.begin(), chiso.end());
    for (int i = 0; i < chiso.size(); i++) {
        cout << A[chiso[i]] << " ";
    }
    return 0;
}