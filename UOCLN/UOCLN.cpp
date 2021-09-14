#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(long long n) {
    if (n == 0 || n == 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    freopen("UOCLN.inp","r",stdin);
    freopen("UOCLN.out","w",stdout);
    long long N;
    cin >> N;
    if (isPrime(N) == true) {
        cout << N - 1;
    } else {
        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                cout << N - N / i;
                return 0;
            }
        }
    }
    return 0;
}