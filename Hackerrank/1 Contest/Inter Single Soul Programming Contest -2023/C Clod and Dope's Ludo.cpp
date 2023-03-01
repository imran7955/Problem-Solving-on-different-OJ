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
ll arr[200100],brr[200100];
int main() {
    fastio; 
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int q = 1; cin >> q;
    for(int tc = 1;tc <= q; tc++)
    {
        ll clod = 0,dope = 0;
        int n; cin >> n;
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        for(int i = 0; i < n; i++)
            cin >> brr[i];
        bool f1 = 0,f2 = 0;
        int last = -1;
        for(int i = 0; i < n ;i++)
        {
            if(arr[i] == 6) f1 = 1;
            if(f1)
            {
                clod += arr[i];
                if(arr[i] == 6 && i -2 > last && arr[i-1] == 6 && arr[i-2] == 6) {clod -= 18;last = i;}
            }
        }
        last = -1;
        for(int i = 0; i  < n; i++)
        {
            if(brr[i] == 6) f2 = 1;
            if(f2)
            {
                dope += brr[i];
                if(brr[i] == 6 && i -2 > last && brr[i-1] == 6 && brr[i-2] == 6) {dope -= 18,last = i;}
            }
        }
        if(clod > dope) 
            cout << "Clod" << endl;
        else if(dope > clod)
            cout << "Dope" << endl;
        else
            cout << "Draw" << endl;
    }
    return 0;
}