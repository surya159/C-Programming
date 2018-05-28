#include <stdio.h>

int main(void) {
	int n,p=1,r;
	scanf("%d",&n);
	while(n!=0) {
		r=n%10;
		p*=r;
		n=n/10;
	}
	printf("%d ",p);
	
	return 0;
}
