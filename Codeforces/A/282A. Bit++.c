#include <stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char s[4];
        scanf("%s",s);
        if(s[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    printf("%d\n",x);
    return 0;
}
