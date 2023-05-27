#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
    fastio; 
   // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int q = 1; //cin >> q;
    for(int tc = 1;tc <= q; tc++)
    {
        ll l_w = 0,r_w = 0,pos;
        string s; cin >> s; 
        for(int i = 0; i < s.size(); i++)
            if(s[i] == '^') pos = i;
        for(int i = 0; i <s.size(); i++)
        {
            if(s[i] == '=' || s[i] == '^') continue;
            int w = s[i] - '0';
            if(i < pos) l_w += w * (pos - i);
            else r_w += w * (i - pos);
        }
        if(l_w > r_w) cout << "left" << endl;
        else if(r_w > l_w) cout << "right" << endl;
        else cout << "balance" << endl; 
    }
    return 0;
}