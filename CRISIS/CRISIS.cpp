#include <bits/stdc++.h>

using namespace std;

bool isSmaller(string str1, string str2)
{
    int n1 = str1.length(), n2 = str2.length();
 
    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;
 
    for (int i = 0; i < n1; i++)
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
 
    return false;
}
 
string tru(string str1, string str2)
{
    bool kt = false;
    if (isSmaller(str1, str2)) {
        swap(str1, str2);
        kt = true;
    }
        
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int carry = 0;
    for (int i = 0; i < n2; i++) {
 
        int sub = ((str1[i] - '0') - (str2[i] - '0') - carry);
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
 
        str.push_back(sub + '0');
    }
    for (int i = n2; i < n1; i++) {
        int sub = ((str1[i] - '0') - carry);
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
        str.push_back(sub + '0');
    }
    reverse(str.begin(), str.end());
    while (str[0] == '0' && str.size() > 1) str.erase(0, 1);
    if (kt) str = '-' + str;
    return str;
}

string a[1000001];

int main() {
    freopen("CRISIS.inp","r",stdin);
    freopen("CRISIS.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string p1, p2;
    cin >> p1 >> p2;
    a[1] = p1;
    a[2] = p2;
    int i = 3;
    while (true) {
        string tam = tru(a[i - 2], a[i - 1]);
        a[i] = tam;
        if (tam[0] == '-') break;
        i++;
    }
    cout << i << " " << a[i];
    return 0;
}