#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("DIFFEREN.INP", "r", stdin);
    freopen("DIFFEREN.OUT", "w", stdout);
    long n,i,m;
    cin >> n;
    vector<long> a(n);
    for (long &z : a) cin >> z;
    sort(a.begin(), a.end());
    m = abs(a[1]-a[0]);
    for (i = n-1; i > 0; i--) m = min(m, abs(a[i]-a[i-1]));
    cout << m;
    return 0;
}