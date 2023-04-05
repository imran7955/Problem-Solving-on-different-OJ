#include <stdio.h>
#include <string.h>

int main()
{
    int len,i,same;
    char a[101],b[101];
    scanf("%s",a);
    scanf("%s",b);
    strlwr(a);
    strlwr(b);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        same=0;
        if(a[i]<b[i])
        {
            printf("-1\n");
            break;
        }
        else if(a[i]>b[i])
        {
            printf("1\n");
            break;
        }
        else
        {
            same=1;
        }
    }
    if(same==1)
    {
        printf("0\n");
    }

    return 0;
}
