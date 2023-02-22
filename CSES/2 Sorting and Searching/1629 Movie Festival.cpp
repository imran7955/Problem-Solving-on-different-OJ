#include <bits/stdc++.h>
#define pb push_back
#define pii pair<int,int>
#define fi first
#define sc second
using namespace std;
bool comp(pii a,pii b)
{
    return a.sc < b.sc;
}
int main() {
    int q = 1; //cin >> q; 
    for(int tc = 1; tc <= q; tc++)
    {
        vector<pii> vv;
        int n; cin >> n;
        for(int i = 0; i < n; i++)
        {
            int a,b; cin >> a >> b;
            vv.pb({a,b});
        }
        sort(vv.begin(),vv.end(),comp);
        int ans = 1,last = vv[0].sc;
        for(int i = 1; i < n;i++){
            if(vv[i].fi >= last)
                ans++,last = vv[i].sc;
        }
        cout << ans << endl;
    }
    return 0;
}