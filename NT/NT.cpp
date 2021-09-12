#include <iostream>

using namespace std;

int main() {
    freopen("NT.inp","r",stdin);
    freopen("NT.out","w",stdout);
    int N;
    cin >> N;
    long long i = N - 1, j = N + 1;
    int so = 2000000;
    bool check[2000001];
    for (int i = 2; i <= so; i++) {
        check[i] = true;
    }
    for (int i = 2; i <= so; i++) {
        if (check[i] == true) {
            for (int j = 2 * i; j <= so; j += i) {
                check[j] = false;
            }
        }
    }
    while (check[i] == false) {
        i--;
    }
    while (check[j] == false) {
        j++;
    }
    cout << i << endl << j;
    return 0;
}