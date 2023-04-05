#include <stdio.h>
int gcd(int a,int b)
{
    int temp;
    if(b < a) { temp = a; a = b; b = temp; }
    for(int i = a; i > 0; i--) { if(a%i == 0 && b%i == 0) return i; }
}
int main()
{
    int a,b,n,loop = 0;
    scanf("%d %d %d", &a, &b, &n);
    while(n != 0)
    {
        loop++;
        if(loop%2) n -= gcd(a,n);
        else n -= gcd(b,n);
    }
    if(loop%2) printf("0\n");
    else printf("1\n");
    return 0;
}
