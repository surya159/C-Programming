#include <stdio.h>

int main(void) {
	// your code goes here
	int n,m;
	scanf("%d%d",&n,&m);
	m=m*n;
	if(m%2 == 0) {
		printf("even");
	}
	else
		printf("odd");
	return 0;
}
