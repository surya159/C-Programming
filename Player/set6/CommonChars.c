#include <stdio.h>
#include <string.h>

int main() 
{
	char s1[30],s2[30];
	scanf("%s %s",s1,s2);
	int len= strlen(s1)>strlen(s2)? strlen(s1): strlen(s2);;
	for(int i=0;i<strlen(s1);i++)
	{
	for(int j=0;j<strlen(s2);j++)
	{
	    if(s1[i]==s2[j])
	    {
	        printf("yes ");
	        return 0;
	    }
	}
	}
	printf("no ");
	return 0;
}
