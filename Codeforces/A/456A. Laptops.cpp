#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,a,b;
    vector< pair< int ,int > > v;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        v.push_back( make_pair(a,b) );
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < n-1; i++)
    {
        if(v[i].first < v[i+1].first && v[i].second > v[i+1].second)
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}
