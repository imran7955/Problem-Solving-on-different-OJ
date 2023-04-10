#include <stdio.h>
int cmpfunc2 (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}
int main()
{
    int n,i,j,i_sum=0,j_sum;
    scanf("%d",&n);
    int coin_array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&coin_array[i]);
    }
    qsort(coin_array, n, sizeof(int), cmpfunc2);
    for(i=0;i<n;i++)
    {
        j_sum=0;
        i_sum+=coin_array[i];
        for(j=i+1;j<n;j++)
        {
            j_sum+=coin_array[j];
        }
        if(i_sum>j_sum)
        {
            break;
        }
    }
    printf("%d\n",i+1);
    return 0;
}
