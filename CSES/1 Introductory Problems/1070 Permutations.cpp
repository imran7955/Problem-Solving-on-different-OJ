#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n; cin >> n;
    if(n == 2 || n == 3)
        cout << "NO SOLUTION" << endl;
    else if(n == 4)
        cout << "3 1 4 2" << endl;
    else{
        for(int i = 1; i <= n; i+=2)
            cout << i << " ";
        for(int i = 2; i <= n; i+=2)
            cout << i << " ";
    }
    return 0;
}