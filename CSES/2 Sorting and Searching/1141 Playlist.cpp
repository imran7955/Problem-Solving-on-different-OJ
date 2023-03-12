#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
 
using namespace std;
 
int main() {
    fastio; 
    int q = 1; //cin >> q;
    for(int tc = 1;tc <= q; tc++)
    {
        map<int,int> pos;
        int n; cin >> n;
        int ans = 0,left = 1;
        for(int right = 1; right <= n; right++)
        {
            int inp; cin >> inp;
            left = max(left,pos[inp]+1);
            ans = max(ans,right - left + 1);
            pos[inp] = right;
        }
        cout << ans << endl;
    }
    return 0;
}