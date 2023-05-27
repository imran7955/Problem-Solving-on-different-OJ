#include <stdio.h>
int main()
{
    int n,m,flag = 0;
    scanf("%d %d", &n, &m);
    while(n*m)
    {
        flag++;
        n--;
        m--;
    }
    if(flag%2) printf("Akshat\n");
    else printf("Malvika\n");
    return 0;
}
