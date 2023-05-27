#include <stdio.h>
int main()
{
    long long int n,m,loop = 0;
    scanf("%lld %lld", &n, &m);
    while(n != 0)
    {
        n--;
        loop++;
        if(loop%m == 0) n++;
    }
    printf("%lld\n",loop);
    return 0;
}
