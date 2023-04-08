#include <stdio.h>
#include <string.h>
int main()
{
    int i,len,r=0;
    char input[101];
    scanf("%s",input);
    len = strlen(input);
    for(i = 0; i < len; i++)
    {
        if(input[i]=='H' || input[i]=='Q' || input[i]=='9')
        {
            r = 1;
            break;
        }
    }
    if(r==0)
    printf("NO\n");
    else
    printf("YES\n");
    return 0;
}
