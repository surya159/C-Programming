#include <stdio.h>

int main(void) {
	int n,k=0;
	scanf("%d",&n);
	while(n!=0)
	{
	    n/=10;
	    k++;
	}
	printf("%d",k);
	return 0;
}
