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
    string s;
    string lin;
    while(cin >> s)
    {
        ll n = s.size(),ans = 0,done = 0;
        ll l = (n-1)/2, r = n/2;
        while(l >= 0 && r < n)
        {
            ll left = s[l] - 'a',right = (s[r] - 'a' +done) % 26;
            if(left > right)
            {
                ans += left-right;
                done += left - right;
            }
            else if(right >left)
            {
                ans += left - right+26;
                done += left-right+26;
            }
            l--,r++;
            //cout << "left = " << left << " right = " << right << " done = " << done  << " ans = " << ans<< endl;
        }
        cout << ans << endl;
    }
    return 0;
}