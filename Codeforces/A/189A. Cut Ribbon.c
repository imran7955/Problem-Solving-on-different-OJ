#include <stdio.h>
int max(int a, int b)
{
    if(a > b) return a;
    else return b;
}
int main()
{
    int n,a,b,c,ribon = 0,k;
    scanf("%d %d %d %d" ,&n ,&a, &b, &c);
    for(int i = 0; i <= n/a; i++)
    {
        for(int j = 0; j <= (n - a*i) / b; j++)
        {
            k = (n - i*a - j*b) / c;
            if( (n - i*a - j*b) % c == 0 && i*a + b*j + c*k == n) ribon = max(ribon,i+j+k);
        }
    }
    printf("%d\n",ribon);
    return 0;
}
