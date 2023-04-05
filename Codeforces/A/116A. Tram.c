#include <stdio.h>
int main()
{
    long long int n,ai,bi,max = 0,present = 0;
    scanf("%lld", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%lld %lld", &ai, &bi);
        if(present - ai + bi > max) max = present - ai + bi;
        present = present - ai + bi;
    }
    printf("%lld\n",max);
    return 0;
}
