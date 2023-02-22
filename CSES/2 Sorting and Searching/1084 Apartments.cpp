#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n[200100],m[200100];
int main() {
    int q=1;// cin >> q;
    for(int tc = 1; tc <= q; tc++)
    {
        ll nn,mm,k; cin >> nn >> mm >> k;
        for(int i = 0; i < nn; i++)
            cin >> n[i];
        for(int i = 0; i < mm; i++)
            cin >> m[i];
        sort(n,n+nn);
        sort(m,m+mm);
        int pep = 0,apa = 0,ans = 0;
        while(pep < nn && apa < mm)
        {
            if(abs(n[pep] - m[apa]) <= k) ans++,pep++,apa++;
            else if(n[pep] > m[apa]) apa++;
            else pep++;
        }
        cout << ans << endl;
    }
    return 0;
}