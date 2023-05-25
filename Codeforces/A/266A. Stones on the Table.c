#include <stdio.h>
int main()
{
    int n,ans = 0;
    scanf("%d",&n);
    char string[n+1];
    scanf("%s",string);
    for(int i = 0; i < n-1; i++)
    {
        while(string[i] == string[i+1]) { ans++; i++; }
    }
    printf("%d\n",ans);
    return 0;
}
