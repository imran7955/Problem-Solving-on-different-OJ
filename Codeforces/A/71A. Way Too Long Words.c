#include <stdio.h>
#include <string.h>
int main()
{
	int t,T,n,i,len,len2;
	char s[100];
	scanf("%d",&T);
	for(t=0;t<T;t++)
	{
	    scanf("%s",s);
	    len=strlen(s);
	    if(len<=10)
	    {
	        printf("%s\n",s);
	    }
	    else
	    {
	        printf("%c%d%c\n",s[0],len-2,s[len-1]);
	    }

	}

	return 0;
}
