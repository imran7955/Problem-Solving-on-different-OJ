#include <stdio.h>
#include <string.h>
int min(char a,char b)
{
    if(a < b) return a;
    else return b;
}

int main()
{
    char string[100];
    scanf("%s",string);
    for(int i = 0; i < strlen(string); i++) { if(string[i] == '9' && i == 0) continue; string[i] = min(string[i],('9' - string[i] +48));}
    for(int i = 0; i < strlen(string); i++) printf("%c",string[i]);
    return 0;
}
