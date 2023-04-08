#include <stdio.h>
#include <string.h>
int main()
{
    int i,len,caps=1;
    char input[101];
    scanf("%s",input);
    len = strlen(input);
    if(input[0]<97)
    {
        for(i=1;i<len;i++)
        {
            if(input[i]<97)
            {
                caps = 1;
            }
            else
            {
                caps = 0;
                break;
            }
        }
    }
    else if(input[0]>96)
    {
        for(i=1;i<len;i++)
        {
            if(input[i]<97)
            {
                caps = 1;
            }
            else
            {
                caps = 0;
                break;
            }
        }
    }
    if(caps==1)
    {
        for(i=0;i<len;i++)
        {
            if(input[i]>='a')
            {
                input[i]=input[i]-32;
            }
            else
            input[i]=input[i]+32;
        }
    }
    printf("%s\n",input);
    return 0;
}
