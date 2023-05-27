#include <stdio.h>
int Sort(int arraylocal[],int len)
{
    int temp;
    while(1)
    {
        int r = 1;
        for(int i = 0; i < len-1; i++)
        {
            if(arraylocal[i] > arraylocal[i+1])
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
    int n,k,can_learn = 0,sum =0;
    scanf("%d %d", &n, &k);
    int array[n],array2[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        array2[i] = array[i];
    }
    Sort(array,n);
    int i = 0;
    while(1)
    {
        sum += array[i];
        if(sum > k) break;
        can_learn += 1;
        i++;
    }
    printf("%d\n",can_learn);
    int z = 0;
    i = 0;
    while(1)
    {
        if(z == can_learn) break;
        for(int j = 0; j < can_learn; j++)
        {
            if(array2[i] == array[j])
            {
                printf("%d ",i+1);
                z++;
                break;
            }
        }
        i++;
    }
    printf("\n");
    return 0;
}
