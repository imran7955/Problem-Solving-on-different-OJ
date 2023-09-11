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
int arr[200100],ans[200100];
int main() {
    fastio;
    int q = 1; //cin >> q;
    for(int tc = 1;tc <= q; tc++)
    {
        int n; cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            int k = i-1;
            while(arr[k] >= arr[i])
                k = ans[k];
            ans[i] = k;
            cout << k << " ";
        }
    }
    return 0;
}
