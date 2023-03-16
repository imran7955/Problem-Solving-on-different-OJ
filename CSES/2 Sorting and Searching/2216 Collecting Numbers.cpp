#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q = 1; //cin >> q;
    for(int tc = 1; tc <= q; tc++)
    {
        map<int,int> pos;
        pos[0] = 0;
        int n,ans = 0; cin >> n;
        for(int i = 1; i <= n; i++)
        {
            int num; cin >> num;
            pos[num] = i;
        }
        for(int i = 1; i <= n; i++)
            if(pos[i] < pos[i-1]) ans++;
        cout << ans+1 << endl;
    }
    return 0;
}