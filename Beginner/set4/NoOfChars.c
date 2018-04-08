#include <stdio.h>
#include <string.h>
 
int main(void) {
	// your code goes here
	char str[20];
	int n,count=0;
	scanf(" %[^\t\n]s",str);
	n=strlen(str);
	for(int i=0;i<n;i++)
	{
	 if(!(str[i] == ' '))
	 {
	     count++;
	 }
	}
	printf("%d",count);
 
	return 0;
}
