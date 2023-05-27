#include <stdio.h>
int main()
{
    int a,b,c,sum;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    sum = a + b * c;
    if(a * (b+c) > sum) sum = a * (b+c);
    if(a * b * c > sum) sum = a * b * c;
    if((a+b) * c > sum) sum = (a+b) * c;
    if(a+b+c > sum) sum = a+b+c;
    printf("%d\n",sum);
    return 0;
}
