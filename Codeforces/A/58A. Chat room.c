#include <stdio.h>
#include <string.h>
int main()
{
    char string[105],target[] = "hello";
    int index = 0,flag = 0;
    scanf("%s",string);
    for(int i = 0; i < strlen(string); i++)
    {
        if(string[i] == target[index]) { flag++; index++; }
        if(index == 5) { printf("YES\n"); return 0; }
    }
    printf("NO\n");
    return 0;
}
