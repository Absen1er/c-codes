#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("HCN.inp","r",stdin);
    freopen("HCN.out","w",stdout);
    int n, x, y, r, minX = INT_MAX, minY = INT_MAX, maxX = INT_MIN, maxY = INT_MIN;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y >> r;
        minX = min(minX, x - r);
        maxX = max(maxX, x + r);
        minY = min(minY, y - r);
        maxY = max(maxY, y + r);
    }
    //int p1X = maxX, p1Y = maxY, p2X = maxX, p2Y = minY, p3X = minX, p3Y = maxY, p4X = minX, p4Y = minY;
    long long length , wide;
    length = maxX - minX, wide = maxY - minY;
    cout << length * wide;
    return 0;
}