#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
typedef unsigned long long ull;
typedef long long ll;

using namespace std;
ll arr[200100];
int main() {
    fastio; 
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int q = 1; //cin >> q;
    for(int tc = 1;tc <= q; tc++)
    {
        ll n,ans = -1e18,temp = ans,inp;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> inp;
            if(temp+inp > inp) temp = temp+inp;
            else temp = inp;
            ans = max(ans,temp);
        }
        cout << ans << endl;
    }
    return 0;
}