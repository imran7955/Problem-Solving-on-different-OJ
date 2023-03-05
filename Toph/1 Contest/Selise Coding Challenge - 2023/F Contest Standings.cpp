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
#define pis pair<int,string>
#define pll pair<ll,ll>
#define fastio ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
    fastio; 
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int q = 1; //cin >> q;
    for(int tc = 1;tc <= q; tc++)
    {
        vector<pis> vv;
        int n; cin >> n;
        for(int i = 0; i < n; i++)
        {
            string s; int p; cin >> s >> p;
            vv.pb({p,s});
        }
        sort(all(vv));
        cout << "Selise Coding Challenge 2023 Winners" << endl;
        cout << "Winner: " << vv[0].sc << " => " << vv[0].fi << endl;
        cout << "1st Runner Up: " << vv[1].sc << " => " << vv[1].fi << endl;
        cout << "2nd Runner Up: " << vv[2].sc << " => " << vv[2].fi << endl;
    }
    return 0;
}