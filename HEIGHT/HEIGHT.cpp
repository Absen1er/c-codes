#include <iostream>
#include <algorithm>

using namespace std;

pair<int, pair<int, int>> A[100001];

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
    return a.second.first < b.second.first;
}

int main() {
    freopen("HEIGHT.inp","r",stdin);
    freopen("HEIGHT.out","w",stdout);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i].first;
        A[i].second.first = i;
    }
    sort(A, A + N);
    A[0].second.second = 0;
    for (int i = 1; i < N; i++) {
        if (A[i].first > A[i - 1].first) {
            A[i].second.second = i;
        } else {
            A[i].second.second = A[i - 1].second.second;
        }
    }
    sort(A, A + N, cmp);
    for (int i = 0; i < N; i++) {
        cout << A[i].second.second << " ";
    }
    return 0;
}