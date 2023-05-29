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
int arr[200100],pos[200100];
int main() {
    fastio;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,m,ans = 0; cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pos[arr[i]] = i;
    }
    pos[n+1] = INT_MAX;
    for(int i = 1; i <= n; i++)
        if(pos[i] < pos[i-1]) ans++;
    for(int tc = 1;tc <= m; tc++)
    {
        int l,r; cin >> l >> r;
        set<pii> to_cheak;
        to_cheak.insert({arr[l]-1,arr[l]});
        to_cheak.insert({arr[l],arr[l]+1});
        to_cheak.insert({arr[r]-1,arr[r]});
        to_cheak.insert({arr[r],arr[r]+1});
        for(auto p : to_cheak)
            if(pos[p.sc] < pos[p.fi]) ans--;
        swap(pos[arr[l]],pos[arr[r]]);
        swap(arr[l],arr[r]);
        for(auto p : to_cheak)
            if(pos[p.sc] < pos[p.fi]) ans++;
        cout << ans + 1 << endl;
    }
    return 0;
}
