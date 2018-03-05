#include <stdio.h>

int main(void) {
	// your code goes here
	int base, expo;
	long int res=1;
	printf("Enter the base and exponent of a no\n");
	scanf("%d%d",&base,&expo);
	while(expo!=0)
	{
		res*=base;
		--expo;
	}
	printf("The power of the given no is %ld",res);
	return 0;
}
