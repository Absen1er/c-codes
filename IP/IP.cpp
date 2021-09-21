#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
    freopen("IP.inp","r",stdin);
    freopen("IP.out","w",stdout);
    int N, A[100005];
    memset(A, 0, sizeof(A));
    cin >> N;
    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;
        A[x] = 1;
    }
    for (int i = 1; i <= 100001; i++) {
        if (A[i] == 0) {
            cout << i;
            return 0;
        }
    }
    return 0;
}