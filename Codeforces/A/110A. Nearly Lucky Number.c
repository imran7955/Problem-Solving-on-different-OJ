#include <stdio.h>
#include <string.h>
int main()
{
    int i,len,lucky=0,r=1;
    char n[100],lucky_string[50];
    scanf("%s",n);
    len = strlen(n);
    for(i=0;i<len;i++)
    {
        if(n[i]=='4' || n[i]=='7')
            lucky++;
    }
    sprintf(lucky_string,"%d",lucky);
    len=strlen(lucky_string);
    for(i=0;i<len;i++)
    {
        if(lucky_string[i]!='4' && lucky_string[i]!='7')
        {
            printf("NO\n");
            r = 0;
            break;
        }
        else
            r = 1;
    }
    if(r==1)
    printf("YES\n");
    return 0;
}
