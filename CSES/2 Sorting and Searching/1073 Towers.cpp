#include <bits/stdc++.h>
#define ub upper_bound
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
        int n; cin >> n;
        multiset<int> s;
        for(int i = 0; i < n; i++)
        {
            int num; cin >> num;
            auto it = s.ub(num);
            if(it == s.end())
                s.insert(num);
            else
            {
                s.erase(it);
                s.insert(num);
            }
        }
        cout << s.size() << endl;
    }
    return 0;
}