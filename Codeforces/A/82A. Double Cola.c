#include <stdio.h>
#include <math.h>
int solv(int a,int b)
{
    int i = 1;
    while(i*b < a) i++;
    return i;
}
int main()
{
    int n,fact = 1,ans,grow = 0;
    scanf("%d",&n);
    int array[n];
    char name[5][8] = { "Sheldon","Leonard","Penny","Rajesh","Howard" };
    while(1)
    {
        grow += 5 * fact;
        if(grow >= n) break;
        fact *= 2;
    }
    ans = n - (grow - fact * 5);
    ans = solv(ans,fact);
    printf("%s\n",name[ans-1]);
    return 0;
}
