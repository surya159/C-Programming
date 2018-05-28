#include <stdio.h>
#include <math.h>

int main(void) {
	int n,a[n];
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++) {
		if(i!=a[i]) {
			printf("%d ",a[i]);
			break;
		}
	}


	return 0;
}
