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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int q = 1; cin >> q;
    for(int tc = 1;tc <= q; tc++)
    {
        int team,p; cin >> team >> p;
        if(team == 1)
            cout << "Unmarried-" << (char)('a'+(p-1)) << endl;
        else cout << "Married-" << (char)('A' + (p-1)) << endl;
    }
    return 0;
}