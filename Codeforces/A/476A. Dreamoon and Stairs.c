#include <stdio.h>
int main()
{
    int n,m,min_move = 0;
    scanf("%d %d", &n, &m);
    if(n%2 == 0) min_move = n/2;
    else { min_move = n/2; min_move++; }
    if(min_move % m == 0) printf("%d\n",min_move);
    else
    {
        while(min_move <= n && min_move % m != 0) min_move++;
        if(min_move > n) printf("-1\n");
        else printf("%d\n",min_move);
    }
    return 0;
}
