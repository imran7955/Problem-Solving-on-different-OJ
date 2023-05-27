#include <stdio.h>
#include <string.h>
int main()
{   
    int i,j,remaining;
    char equation[101],temp;
    scanf("%s",equation);
    int len=strlen(equation);
    while(1)
    {
        remaining=0;
        for(i=0;i<len-1;i+=2)
        {
            if(equation[i]>equation[i+2])
            {
                temp=equation[i];
                equation[i]=equation[i+2];
                equation[i+2]=temp;
                remaining=1;
            }
        }
        if(remaining==0)
        {
            break;
        }
    }
   
    for(i=0;i<len;i++)
    {
        printf("%c",equation[i]);
    }
    printf("\n");
    
    return 0;
}
