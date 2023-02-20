#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
int main() {
    ll n; cin >> n;
    ll sum = n*(n+1)/2;;
    if(sum%2) cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        ll l = 1,r = n,done = 0,extra = 0;
        cout << (n+1) / 2 << endl;
        while(done < sum/2)
        {
            if(done + (l+r) <= sum/2)
                cout << l << " " << r << " ";
            else
            {
                cout << l << " " << r-l;
                extra = l;
            }
            done += l+r,l++,r--;
        }
        cout << endl << n/2 << endl;
        while(done < sum)
        {
            if(l != r) cout << l << " " << r << " ";
            else cout << l+extra << endl;
            done += l+r,l++,r--;
        }
    }
    return 0;
}