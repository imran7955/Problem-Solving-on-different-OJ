#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define up upper_bound
#define bs binary_search
#define fi first
#define sc second
#define all(x) x.begin(),x.end()
#define set0(x) memset(x,0,sizeof(x))
#define set1(x) memset(x,1,sizeof(x))
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fastio ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
typedef unsigned long long ull;
typedef long long ll;

using namespace std;
ll arr[200100],n,k;
int getProfit(int idx)
{
    int cnt = 0;
    for(int i = idx; i <= n; i++)
        if(arr[idx] % arr[i] == 0)
            cnt++;
    return cnt;
}
int main() {
    fastio;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int q = 1; //cin >> q;
    for(int tc = 1;tc <= q; tc++)
    {
        cin >> n >> k;
        for(int i = 1; i <= n; i++)
            cin >> arr[i];
        int l = 1,r = n,ans = -1;
        while(l <= r)
        {
            int mid = (l+r) / 2;
            int profit = getProfit(mid);
            if(profit < k) r = mid-1;
            else
            {
                ans = max(ans,mid);
                l = mid+1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
