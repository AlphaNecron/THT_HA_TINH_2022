#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("COUNTN.INP", "r", stdin);
    freopen("COUNTN.OUT", "w", stdout);
    long m,n,x,i, c = 0;
    cin >> m >> n;
    vector<bool> a(1e9);
    for (i = 0; i < m; i++) {
        cin >> x;
        a[x] = true;
    }
    for (i = 0; i < n; i++) {
        cin >> x;
        if (!a[x]) c++;
    }
    cout << c;
}