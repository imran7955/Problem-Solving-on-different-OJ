#include <stdio.h>
int main()
{
    char remix[205];
    scanf("%s", remix);
    for(int i = 0; i < 205; i++)
        if(remix[i] == 'W' && remix[i+1] == 'U' && remix[i+2] == 'B')
        {
            remix[i] = ' ';
            for(int j = i+1; j < 205; j++) remix[j] = remix[j+2];
        }
    while(remix[0] == ' ') for(int i = 0; i < 205; i++) remix[i] = remix[i+1];
    while(1)
    {
        int flag = 0;
        for(int i = 0; i < 203; i++)
            if(remix[i] == ' ' && remix[i+1] == ' ')
            {
                flag = 1;
                for(int j = i+1; j < 203; j++) remix[j] = remix[j+1];
            }
        if(flag == 0) break;
    }
    printf("%s\n",remix);
    return 0;
}
