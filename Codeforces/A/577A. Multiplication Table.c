#include <stdio.h>
int main()
{
    long long int n,k,ans = 0;
    scanf("%lld %lld", &n, &k);
    for(long long int i = 1; i <= n; i++) if(k%i == 0 && k >= i && k <= i*n) ans++;
    printf("%lld\n",ans);
    return 0;
}
