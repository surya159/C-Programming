#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n;
	long fac=1;
	printf("Enter the no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac*=i;
	}
	printf("%d",fac);
	return 0;
}
