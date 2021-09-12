#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int N) {
    if (N < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(N); i++) {
        if (N % i == 0) {
            return false;
        }
    }

    return true;
}

bool kt(int N) {
    for (int i = 2; i <= N; i++) {
        if (N % i == 0) {
            if (isPrime(i) == true && i != 2 && i != 3 && i != 5) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    freopen("UOCSO.inp","r",stdin);
    freopen("UOCSO.out","w",stdout);
    int N, i = 7, j = 0;
    cin >> N;
    while (j != N) {
        if (kt(i) == true) {
            cout << i << " ";
            j++;
        }
        i++;
    }
    return 0;
}