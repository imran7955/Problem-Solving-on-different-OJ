#include <stdio.h>
#include <string.h>
int main()
{
	int i,n,k,counter=0,valid;
	scanf("%d %d",&n,&k);
	int array[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&array[i]);
	}
	for(i=0;i<n-1;i++)
	{
	    if(array[i]>=array[i+1])
	    {
	        valid=1;
	    }
	    else
	    {
	        valid=0;
	        break;
	    }
	}
	if(valid==1)
	{
	    for(i=0;i<n;i++)
    	{
    	    if(array[i] > 0)
    	    {
    	        if(array[i]>=array[k-1])
    	        {
    	            counter+=1;
    	        }
    	    }
    	}
	}
	printf("%d\n",counter);
	return 0;
}
