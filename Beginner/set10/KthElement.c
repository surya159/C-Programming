#include <stdio.h>

int main(void) {
	int n,k,a[n];
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d ",a[k-1]);
	
	return 0;
}
