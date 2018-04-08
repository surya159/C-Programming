#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
	int i,rem,count=0;
	scanf("%d",&i);
	while(i>0)	{
		i=i/10;
		count++;
	}
	printf("%d",count);
	return 0;
}
