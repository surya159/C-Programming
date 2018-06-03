#include <stdio.h>
#include <string.h>

int main() 
{
	char st[30];
	char k;
	scanf("%s %c",st,&k);

	for(int i=0;i<strlen(st);i++)
	{
	    if(st[i]==k)
	    {
	        printf("%d",i+1);
	        break;
	    }
	}
	return 0;
}
