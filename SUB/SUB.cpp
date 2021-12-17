#include <iostream>
#include <string>
#include <climits>

using namespace std;

int a[100001];

long long doancon(int a[], int n)
{
    long long maxso = INT_MIN, maxht = 0;
    for (int i = 0; i < n; i++) {
        maxht = maxht + a[i];
        if (maxso < maxht) maxso = maxht;
        if (maxht < 0) maxht = 0;
    }
    return maxso;
}

long long daycon(int a[], int n) {
    long long kq = 0, so = INT_MIN, demneg = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) {
            kq += a[i];
        }
        if (a[i] < 0) {
            if (so < a[i]) {
                so = a[i];
            }
            demneg++;
        }
    }
    if (demneg == n) return so;
    else return kq;
}

int main() {
    freopen("SUB.inp","r",stdin);
    freopen("SUB.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << daycon(a, n) << " " << doancon(a, n) << endl;
    }
    return 0;
}