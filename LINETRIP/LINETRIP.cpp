#include <iostream>
#include <algorithm>

using namespace std;

int A[101];

int main() {
    freopen("LINETRIP.inp","r",stdin);
    freopen("LINETRIP.out","w",stdout);
    int N, pos = 0, neg = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (A[i] > 0) {
            pos++;
        }
        if (A[i] < 0) {
            neg++;
        }
    }
    sort(A, A + N);
    if (pos == 0) {
        cout << abs(A[0]) * 2;
    } else if (neg == 0) {
        cout << abs(A[N - 1]) * 2;
    } else {
        cout << 2 * (abs(A[0]) + abs(A[N - 1]));
    }
    
    return 0;
}