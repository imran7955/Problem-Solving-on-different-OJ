#include <stdio.h>
int Sort(int arraylocal[],int array2[],int len)
{
    int temp;
    while(1)
    {
        int r = 1;
        for(int i = 0; i < len-1; i++)
        {
            if(arraylocal[i] > arraylocal[i+1])
            {
                temp = arraylocal[i];
                arraylocal[i] = arraylocal[i+1];
                arraylocal[i+1] = temp;
                temp = array2[i];
                array2[i] = array2[i+1];
                array2[i+1] = temp;
                r = 0;
            }
        }
        if(r==1) break;
    }
}
int main()
{
    long long int s,temp,n,flag = 1;
    scanf("%lld %lld", &s, &n);
    temp = s;
    int x[n],y[n];
    for(int i = 0; i < n; i++) scanf("%lld %lld", &x[i], &y[i]);
    Sort(x,y,n);
    for(int i = 0; i < n; i++)
    {
        if(s > x[i]) s += y[i];
        else { printf("NO\n"); return 0; }
    }
    printf("YES\n");
    return 0;
}
