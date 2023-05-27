#include <stdio.h>
#include <string.h>
char map[] = "qwertyuiopasdfghjkl;zxcvbnm,./",string[102],move;
int flag,i = 0;
int Print(char c)
{
    int j = 0;
    while(1)
    {
        if(map[j] == c) { printf("%c", map[j+flag]); return 0; }
        j++;
    }
}
int main()
{
    scanf("%c", &move);
    scanf("%s", string);
    if(move == 'R') flag = -1;
    else flag = 1;
    for(int i = 0; i < strlen(string); i++) Print(string[i]);
    return 0;
}
