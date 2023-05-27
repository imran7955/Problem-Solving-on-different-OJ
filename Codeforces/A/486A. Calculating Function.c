#include <stdio.h>
int main()
{
    long long int n,sum = 0;
    scanf("%lld", &n);
    if(n%2) printf("%lld\n",(n+1)/2*-1);
    else printf("%lld\n",n/2);
    return 0;
}
