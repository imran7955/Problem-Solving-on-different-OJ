#include <stdio.h>
int main()
{
    int n,start = 0,temp = 0,index,max = 0,item;
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n; i++) scanf("%d", &array[i]);
    while(start < n)
    {
        index = start + 1;
        temp = 1;
        item = array[start];
        while(item <= array[index] && index < n)
        {
            index++;
            temp++;
            item = array[index-1];
        }
        if(temp > max) max = temp;
        start = index;
    }
    printf("%d\n",max);
    return 0;
}
