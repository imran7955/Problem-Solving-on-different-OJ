#include <stdio.h>
int main()
{
    int n,i,p,q,final_ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);
        if((q-p)>=2)
        {
            final_ans+=1;
        }
    }
    printf("%d\n",final_ans);
    return 0;
}
