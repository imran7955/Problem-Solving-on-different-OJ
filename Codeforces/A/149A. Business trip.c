#include <stdio.h>
int Sort(int arraylocal[],int len)
{
    int temp;
    while(1)
    {
        int r = 1;
        for(int i = 0; i < len-1; i++)
        {
            if(arraylocal[i] < arraylocal[i+1])
            {
                temp = arraylocal[i];
                arraylocal[i] = arraylocal[i+1];
                arraylocal[i+1] = temp;
                r = 0;
            }
        }
        if(r==1) break;
    }
}
int main()
{
    int k,array[12],ans = 0,i = 0,sum = 0;
    scanf("%d", &k);
    for(int i = 0; i < 12; i++) scanf("%d", &array[i]);
    Sort(array,12);
    while(sum < k && i < 12) { ans++; sum += array[i]; i++; }
    if(sum < k) printf("-1\n");
    else printf("%d\n",ans);
    return 0;
}
