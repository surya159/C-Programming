#include <stdio.h>

int main(void) {
	int n,a[n],sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++) {
		sum+=a[i];
	}
	printf("%d ",sum);
	
	return 0;
}
