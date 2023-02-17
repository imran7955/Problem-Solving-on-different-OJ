#include <stdio.h>
#include <string.h>
int main()
{
    char string[105],string2[105];
    int index = 0;
    scanf("%s",string);
    scanf("%s",string2);
    for(int i = strlen(string)-1; i >= 0; i--)
    {
        if(string[index] != string2[i]) { printf("NO\n"); return 0; }
        index++;
    }
    printf("YES\n");
    return 0;
}
