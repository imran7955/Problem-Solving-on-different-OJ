#include <stdio.h>
int main()
{
    int n,t,ans,i = 1;
    scanf("%d %d", &n, &t);
    if(n == 1 && t > 9) printf("-1\n");
    else if(n == 1) printf("%d",t);
    else if(t > 9)
    {
        printf("%d",t);
        for(int i = 0; i < n-2; i++) printf("0");
    }
    else
    {
        printf("%d",t);
        for(int i = 0; i < n-1; i++) printf("0");
    }
    return 0;
}
