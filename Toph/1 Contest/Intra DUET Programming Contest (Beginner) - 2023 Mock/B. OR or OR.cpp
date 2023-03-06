#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans = 0,inp;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> inp;
        ans |= inp;
    }
    cout << ans << endl;
    return 0;
}