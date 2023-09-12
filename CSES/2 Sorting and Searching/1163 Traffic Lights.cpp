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
int main() {
    fastio;
    int q = 1; //cin >> q;
    for(int tc = 1;tc <= q; tc++)
    {
        int n,m,x; cin >> n >> m;
        multiset<int> lights,segments;
        lights.insert(0);
        lights.insert(n);
        segments.insert(n);
        for(int i = 1; i <= m; i++)
        {
            cin >> x;
            auto l = lights.lb(x),h = lights.up(x);
            l--;
            int to_break = *h - *l;
            if(segments.find(to_break) != segments.end())
                segments.erase(segments.find(to_break));
            segments.insert(x - *l);
            segments.insert(*h - x);
            lights.insert(x);
            cout << *segments.rbegin() << " ";
        }
    }
    return 0;
}