#include <stdio.h>

int main(void) {
	int n,fac=1;
	scanf("%d",&n);
	while(n) {
		fac=fac*n;
		n--;
	}
	printf("%d",fac);
	return 0;
}
