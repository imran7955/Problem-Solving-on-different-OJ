#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[200100];
int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    ll ans = 0;
    for(int i = 1; i < n; i++)
    {
        ans += max(0LL,arr[i-1] - arr[i]);
        arr[i] = max(arr[i],arr[i-1]);
    }
    cout << ans << endl;
    return 0;
}