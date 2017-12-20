#include <stdio.h>

int main(void) {
	// your code goes here
	char t,s[20];
	int i,x;
	printf("Enter the string\n");
	gets(s);
	x=strlen(s);
	for(i=0;i<x-1;i+=2)
	{
		t=s[i];
		s[i]=s[i+1];
		s[i+1]=t;
	}
	printf("Swapped string is %s",s);
	return 0;
}
