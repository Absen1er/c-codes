#include <iostream>

using namespace std;

bool kt(long long N) {
    long long x = 2;
    while (x * x <= N) {
        if (N % (x * x) == 0) {
            return false;
        }
        x++;
    }

    return true;
}

int main() {
    freopen("SQFREE.inp","r",stdin);
    freopen("SQFREE.out","w",stdout);
    long long m;
    while (cin >> m) {
        for (long long i = m; i >= 1; i--) {
            if (m % i == 0 && kt(i) == true) {
                cout << i << endl;
                break;
            } 
        }
    }
    return 0;
}