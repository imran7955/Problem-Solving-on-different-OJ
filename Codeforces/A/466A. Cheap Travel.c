#include <stdio.h>
int min(int a,int b)
{
    if(a < b) return a;
    else return b;
}
int main()
{
    int n,m,a,b,temp,temp2;
    scanf("%d %d %d %d" ,&n, &m, &a, &b);
    temp = a * n;
    temp2 = (n / m) * b;
    if(n%m) temp2 +=min(b,(n%m)*a);
    if(temp < temp2) printf("%d\n",temp);
    else printf("%d\n",temp2);
    return 0;
}
