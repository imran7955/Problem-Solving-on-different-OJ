#include <stdio.h>
int main()
{
    int n,a,temp;
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n; i++) array[i] = 0;
    scanf("%d", &a);
    for(int i = 0; i < a; i++) { scanf("%d", &temp); if(!array[temp-1]) array[temp-1] = 1; }
    scanf("%d", &a);
    for(int i = 0; i < a; i++) { scanf("%d", &temp); if(!array[temp-1]) array[temp-1] = 1; }
    for(int i = 0; i < n; i++)
    {
        if(!array[i]) { printf("Oh, my keyboard!\n"); return 0; }
    }
    printf("I become the guy.\n");
    return 0;
}
