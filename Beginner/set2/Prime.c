#include <stdio.h>

int main(void) {
	// your code goes here
	int n,flag=0;
	printf("Enter the no\n");
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
			flag=1;
	}
	if(flag==1)
		printf("Not a prime no");
	else
		printf("Prime no");
	return 0;
}
