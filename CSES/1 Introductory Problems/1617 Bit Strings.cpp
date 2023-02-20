#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
int main() {
    fastio;
    const ll M = 1e9+7;
    ll ans = 1,n; cin >> n;
    for(int i = 0; i < n; i++)
        ans = (ans * 2) % M;
    cout << ans << endl;
    return 0;
}