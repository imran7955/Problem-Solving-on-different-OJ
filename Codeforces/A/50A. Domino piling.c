#include <stdio.h>
int main()
{
    int n,m,ans = 0;
    scanf("%d %d", &n, &m);
    if(n > 1)
    {
        ans += (n / 2) * m;
        if(n % 2 && m > 1) ans += m / 2;
    }
    else ans += m / 2;
    printf("%d\n",ans);
    return 0;
}
