#include <stdio.h>

int main()
{
    int n,count=0,solution,i,j,s[3];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        solution=0;
        for(j=0;j<3;j++)
        {
            scanf("%d",&s[j]);
        }
        for(j=0;j<3;j++)
        {
            if(s[j]==1)
            solution+=1;
        }
        if(solution>=2)
        {
            count+=1;
        }
    }
    printf("%d\n",count);
    return 0;
}