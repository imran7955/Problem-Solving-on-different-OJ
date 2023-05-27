#include <stdio.h>
int c[] = {0,0,0,0};
int combine(int n)
{
    if(n == 25)
    {
        if(c[1]) { c[1] -= 1; return 1; }
        else return 0;
    }
    else
    {
        if(c[1] && c[2]) { c[1]--; c[2]--; return 1; }
        if(c[1] >= 3) { c[1] -= 3; c[3]++; return 1;}
        else return 0;
    }
    return 0;
}
int main()
{
    int n,flag = 1;
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n; i++) scanf("%d", &array[i]);
    for(int i = 0; i < n; i++)
    {
        if(array[i] > 25)
        {
            if( combine(array[i]-25))
            {
                if(array[i] == 50) c[2]++;
                else c[3]++;
            }
            else { printf("NO\n"); return 0; }
        }
        else c[1]++;
    }
    printf("YES\n");
    return 0;
}
