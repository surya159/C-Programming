#include <stdio.h>
#include <string.h>

int main() 
{
	char st[30];
	char k;
	int count=0;
	scanf("%s %c",st,&k);

	for(int i=0;i<strlen(st);i++)
	{
	    if(st[i]==k)
	    {
	        count++;
	    }
	}
	printf("%d",count);
	return 0;
}
