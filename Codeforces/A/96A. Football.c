#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,len,r=1;
    char array[101]="";
    scanf("%s",array);
    len=strlen(array);
    for(i=0;i<=len-7;i++)
    {
        for(j=i+1;j<i+7;j++)
        {
            if(array[i]==array[j])
            {
                r=0;
            }
            else
            {
                r=1;
                break;
            }
        }
        if(r==0)
        {
            break;
        }
    }
    if(r==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
