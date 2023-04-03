#include <bits/stdc++.h>
int main()
{
    long long int n,a,b,c,x = 0,y = 0, z = 0;
    scanf("%lld", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        x += a;
        y += b;
        z += c;
    }
    if(x || y || z) printf("NO\n");
    else printf("YES\n");
    return 0;
}