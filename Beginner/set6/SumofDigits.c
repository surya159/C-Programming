#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
	int n,rem,p,sum=0;
	scanf("%d",&n);
	while(n>0) {
		rem=n%10;
		sum+=rem;
		n/=10;
	}
	printf("%d",sum);
	return 0;
}
