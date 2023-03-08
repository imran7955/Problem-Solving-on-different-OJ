#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
typedef unsigned long long ull;
typedef long long ll;

using namespace std;
ll arr[200100];
int main() {
    fastio; 
    int q = 1; //cin >> q;
    for(int tc = 1;tc <= q; tc++)
    {
        ll n,sum = 1,inp;
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr,arr+n);
        for(int i = 0; i < n; i++)
        {
            if(sum < arr[i])
                break;
            else sum += arr[i];
        }
        cout << sum << endl;
    }
    return 0;
}