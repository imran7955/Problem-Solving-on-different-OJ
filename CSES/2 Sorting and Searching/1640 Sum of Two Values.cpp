#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
typedef unsigned long long ull;
typedef long long ll;

using namespace std;
int arr[200100];
int main() {
    fastio; 
    int q = 1; //cin >> q;
    for(int tc = 1;tc <= q; tc++)
    {
        map<int,int> pos;
        int n,sum,a,b,found = 0;
        cin >> n >> sum;
        for(int i = 1; i <= n; i++) cin >> arr[i];
        for(int i = 1; i <= n && !found; i++)
        {
            if(pos[sum - arr[i]])
                a = i,b = pos[sum - arr[i]],found = 1;
            else pos[arr[i]] = i;
        }
        if(found) cout << a << " " << b << endl;
        else cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}