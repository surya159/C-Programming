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
	   if(!((x[i]>='0'&& x[i]<='9') || (x[i]>='A'&& x[i]<='Z') || (x[i]>='a'&& x[i]<='z') || x[i]==' '))
	    {
	        count++;
	    }
	}
	printf("%d",count);
	return 0;
}
