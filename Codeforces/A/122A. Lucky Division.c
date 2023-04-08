#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,len,n,lucky=0;
    char string[10];
    scanf("%d",&n);
    sprintf(string,"%d",n);
    len = strlen(string);
    for(i = 0; i < len; i++)
    {
        if(string[i]=='4' || string[i]=='7')
        {
            lucky = 1;
        }
        else
        {
            lucky = 0;
            break;
        }
    }
    if(lucky==1)
    {
        printf("YES\n",n);
    }
    else
    {
        for(i=4;i<=n;i++)
        {
            sprintf(string,"%d",i);
            len = strlen(string);
            for(j=0;j<len;j++)\
            {
                if(string[j]=='4' || string[j]=='7')
                {
                    lucky = 1;
                }
                else
                {
                    lucky = 0;
                    break;
                }
            }
            if(lucky==1)
            {
                if(n%i==0)
                {
                    printf("YES\n",i);
                    break;
                }
                else
                {
                    lucky = 0;
                }
            }

        }
    }
    if(lucky==0)
    printf("NO\n");
    return 0;
}
