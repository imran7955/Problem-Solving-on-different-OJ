#include <stdio.h>
#include <math.h>
int main()
{
    int n,c0 = 0,c1 = 0;
    scanf("%d", &n);
    char string[n+1];
    scanf("%s", string);
    for(int i = 0; i < n; i++)
    {
        if(string[i] == '0') c0++;
        else c1++;
    }
    printf("%d\n",abs(c0-c1));
    return 0;
}
