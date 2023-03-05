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
    fastio;
    int q = 1;cin >> q;
    for(int tc = 1;tc <= q; tc++)
    {
        string need1 = "SELISE",need2 = " Digital Platforms";
        map<char,int> freq;
        string st,temp;

	// sentence input
        if(tc == 1) getline(cin,temp);
        getline(cin, st);
	// sentence input      
  
	for(int i = 0; i < st.size(); i++)
            freq[st[i]]++;
        bool f1 = 1,f2 = 1;
        for(int i = 0; i < need1.size() && f1; i++)
        {
            if(freq[need1[i]] == 0) f1 = 0;
            else freq[need1[i]]--;
        }
        for(int i = 0; i < need2.size() && f2; i++)
        {
            if(freq[need2[i]] == 0) f2 = 0;
            else freq[need2[i]]--;
        }
        cout << "Case " << tc << ": ";
        if(!f1) cout << "NONE" << endl;
        else if(f2) cout << "BOTH" << endl;
        else cout << "SELISE" << endl;
    }
    return 0;
}
