#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	int len,i,a[30];
	char str[30];
	printf("Enter the string\n");
	gets(str);
	len=strlen(str);
	for(i=0;i<26;i++)
	{
		a[i]=0;
	}
	for(i=0;i<len;i++)
	{
		if((str[i]>='A') && (str[i]<='Z'))
		{
			a[str[i] - 65]++;
		}
		else if((str[i]>='a') && (str[i]<='z'))
		{
			a[str[i] - 97]++;
		}
	}
	printf("The repetition of characeters:\n");
	for(i=0;i<26;i++)
	{
		if(a[i]!=0)
		{
			printf("%c = %d\n",(i+97),a[i]);
		}
	}
	
	return 0;
}
