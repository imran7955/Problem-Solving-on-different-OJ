#include <stdio.h>
int main()
{
    int n,t,index = 1;
    scanf("%d %d", &n, &t);
    int array[n];
    for(int i  = 1; i <= n-1; i++) scanf("%d", &array[i]);
    while(index <= n)
    {
        index += array[index];
        if(index == t) { printf("YES\n"); return 0; };
    }
    printf("NO\n");
    return 0;
}
