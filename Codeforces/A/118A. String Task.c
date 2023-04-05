#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int len;
char array[101];
int upper_to_lower(char array[])
{
    len=strlen(array);
    for(int i=0;i<len;i++)
    {
        array[i]=tolower(array[i]);
    }
    strcpy(array,array);
}
 
int main()
{
    char i;
    scanf("%s",array);
    upper_to_lower(array);
    for(i=0;i<len;i++)
    {
        if(array[i]!='a' && array[i]!='e' && array[i]!='i' && array[i]!='o' && array[i]!='u' && array[i]!='y')
        {
            printf(".%c",array[i]);    
        }
    }
    printf("\n");
    return 0;
}