#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool NOTin(char array[10],char n)
{
    int len,i,r=1;
    len = strlen(array);
    for(i=0;i<len;i++)
    {
        if(array[i]==n)
        {
            r=0;
            break;
        }
        else
        {
            r = 1;
        }
    }
    if(r==1)
    return true;
    else
    return false;
}
int main()
{
    int i,len,year,r=1;
    scanf("%d",&year);
    while(1)
    {
        int distinct=1;
        char distinct_array[10]="",year_string[10]="";
        sprintf(year_string,"%d",year+1);
        len = strlen(year_string);
        distinct_array[0]=year_string[0];
        for(i=1;i<len;i++)
        {
            if(NOTin(distinct_array,year_string[i]))
            {
                distinct_array[i]=year_string[i];
                distinct +=1;
            }
        }
        if(distinct==len)
        {
            break;
        }
        else
        {
            sscanf(year_string,"%d",&year);
        }
    }
    printf("%d\n",year+1);
    return 0;
}

