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
ll MOD;
ll Pow(ll a, ll b)
{
    if(a == 0) return 0;
    if(b == 0) return 1;
    return ( (b%2 ? a : 1) * Pow((a*a)% MOD,b/2) ) % MOD;
}
int main() {
    fastio; 
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int q = 1; cin >> q;
    for(int tc = 1;tc <= q; tc++)
    {
        ll x,y,z; cin >> x >> y >> z;
        MOD = y-x;
        cout << __gcd(Pow(x,z) + Pow(y,z) , y-x) << endl;
    }
    return 0;
}