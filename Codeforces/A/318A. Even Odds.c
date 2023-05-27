#include <stdio.h>
int main()
{
    long long int n,k;
    scanf("%lld %lld", &n, &k);
    if(k <= n - (n/2)) printf("%lld\n",k*2-1);
    else printf("%lld\n",(k - (n - (n/2))) * 2);
    return 0;
}
