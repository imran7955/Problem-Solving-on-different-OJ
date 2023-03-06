#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;
ll n;
int main() {
    fastio;
    int q = 1; cin >> q;
    for(int tc = 1;tc <= q; tc++)
    {
        cin >> n;
        cout<< n*n << endl;
    }
    return 0;
}
