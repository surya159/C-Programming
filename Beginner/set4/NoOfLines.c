#include <stdio.h>
#include<string.h>

int main() 
{
	char x[100];
	int count=0;
	scanf("%[^\t\n]s",x);
	int n=strlen(x);
	for(int i=0;i<n;i++)
	{
	   if(x[i]=='.'&& x[i+1]!='\0')
	    {
	        count++;
	    }
	}
	printf("%d",count+1);
	return 0;
}
