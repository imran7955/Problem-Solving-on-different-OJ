#include <stdio.h>
int main()
{
    long int k,n,w,i,j,total_cost=0,to_borrow=0;
    scanf("%ld %ld %ld" ,&k, &n, &w);
    for(i=1;i<=w;i++)
    {
        total_cost+=k*i;
    }
    if(total_cost>n)
    {
        to_borrow=total_cost-n;
    }
    printf("%ld\n",to_borrow);
    return 0;
}
