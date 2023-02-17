#include <stdio.h>
int main()
{
    int n,temp,odd = 0,u,v;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &temp);
        if(temp % 2) { odd++; u = i;}
        else v = i;
    }
    if(odd == 1) printf("%d\n",u);
    else printf("%d\n", v);
    return 0;
}
