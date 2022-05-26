#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("BALANSUB.INP", "r", stdin);
    freopen("BALANSUB.OUT", "w", stdout);
    long n,i,j, c, m = 0;
    cin >> n;
    vector<long> a(n);
    for (long &z : a) cin >> z;
    for (i = 0; i < n; i++) {
        c = 0;
        for (j = i; j < n; j++) {
            if (a[j] > j - i) c++;
            else break;
        }
        m = max(c,m);
    }
    cout << m;
    return 0;
}