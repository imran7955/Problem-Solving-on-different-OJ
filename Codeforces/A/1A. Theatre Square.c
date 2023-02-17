#include <stdio.h>
int main()
{
    long long int n,m,a,row = 0,col = 0,ans = 0;
    scanf("%lld %lld %lld", &n, &m, &a);
    row = n / a;
    if(n % a) row++;
    if(m > a)
    {
        ans += row * (m / a);
        if(m % a) ans += row;
    }
    else ans += row;
    printf("%lld\n",ans);
    return 0;
}
