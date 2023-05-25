#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool In(char array[],char character)
{
    int len=strlen(array),r;
    for(int i=0;i<len;i++)
    {
        if(array[i]==character)
        {
            r=1;
            break;
        }
        else
        {
            r=0;
        }
    }
    if(r==1)
    {return true;}
    else
    {return false;}
}
int main()
{
    int len,i,distinct_char=1;
    char word[101],unique_word[101]="";
    scanf("%s",word);
    unique_word[0]=word[0];
    len=strlen(word);
    for(i=1;i<len;i++)
    {
        if(In(unique_word,word[i]))
        {
            continue;
        }
        else
        {
            unique_word[distinct_char]=word[i];
            distinct_char+=1;
        }
    }
    if(distinct_char%2==0)
    printf("CHAT WITH HER!\n");
    else
    printf("IGNORE HIM!\n");
    return 0;
}
