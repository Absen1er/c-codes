#include <iostream>
#include <string>

using namespace std;

pair<string, long long> div(string a, long long b) {
    string kq = "";
    long long du = 0;
    for (int i = 0; i < a.size(); i++) {
        du = du * 10 + (a[i] - '0');
        kq += char(du / b + '0');
        du %= b;
    }
    while (kq[0] == '0' && kq.size() > 1) {
        kq.erase(0, 1);
    }
    pair<string, long long> x;
    x.first = kq;
    x.second = du;
    return x;
}

int main()
{
    freopen("CHIA.inp","r",stdin);
    freopen("CHIA.out","w",stdout);
    pair<string, long long> x;
    string a;
    cin >> a;
    long long b;
    cin >> b;
    x = div(a, b);
    cout << x.first << endl << x.second;
    return 0;
}