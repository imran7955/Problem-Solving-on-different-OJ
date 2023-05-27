#include <stdio.h>
int main()
{
    int n,ans = 0;
    scanf("%d", &n);
    while(n)
    {
        if(n%2 == 0) n /= 2;
        else { ans++; n--; }
    }
    printf("%d\n",ans);
    return 0;
}
