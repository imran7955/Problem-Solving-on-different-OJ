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
ll sum[200100],arr[200100];
int main() {
    fastio; 
    // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int q = 1; //cin >> q;
    for(int tc = 1;tc <= q; tc++)
    {
        ll n,ans = 0; cin >> n; 
        for(int i = 1; i <= n; i++)
            cin >> arr[i];
        sort(arr+1,arr+n+1);
        for(int i = 1; i <= n; i++)
            sum[i] = sum[i-1] + arr[i];
        for(int i = 1; i <= n; i++)
        {
            ans += sum[n] - sum[i-1];
            ans -= arr[i] * (n-i+1);
        }
        cout << ans << endl;
    }
    return 0;
}