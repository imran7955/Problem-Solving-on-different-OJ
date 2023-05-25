#include <stdio.h>
#include <math.h>
int main()
{
    int n,row,col;
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            scanf("%d",&n);
            if(n) { row = i; col = j; }
        }
    }
    printf("%d\n",abs(3-row)+abs(3-col));
    return 0;
}