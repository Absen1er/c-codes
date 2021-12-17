#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int A[200001];

int main() {
    freopen("MAKERECT.inp","r",stdin);
    freopen("MAKERECT.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    sort(A + 1, A + N + 1, greater<int>());
    long long d = 0, dt = 1;
    for (int i = 1; i < N; i++) {
        if (A[i] == A[i + 1]) {
            dt = dt * A[i];
            i++;
            d++;
        }
        if (d == 2) {
            break;
        }
    }
    if (d == 2) {
        cout << dt;
    } else {
        cout << "0";
    }
    return 0;
}