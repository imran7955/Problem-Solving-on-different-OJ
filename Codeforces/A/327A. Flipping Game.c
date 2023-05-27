#include <stdio.h>
int Arcp(int array[],int array2[],int len)
{
    for(int i = 0; i < len; i++) array2[i] = array[i];
}
int main()
{
	int n,temp = 0,count = 0;
	scanf("%d", &n);
	int array[n],array2[n];
	for(int i = 0; i < n; i++) scanf("%d", &array[i]);
	for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            Arcp(array,array2,n);
            for(int k = i; k <= j; k++) array2[k] = !array2[k];
            for(int k = 0; k < n; k++) if(array2[k]) temp++;
            if(temp > count) count = temp;
            temp = 0;
        }
    }
	printf("%d\n",count);
	return 0;
}
