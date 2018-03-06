#include <stdio.h>

int main(void) {
	// your code goes here
	int n,val;
	printf("Enter the no \n");
	scanf("%d",&n);
	for(int i=1;i<=5;i++)
	{
		val=n*i;
		printf("%d ",val);
	}
	return 0;
}
