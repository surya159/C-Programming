#include <stdio.h>

int main(void) {
	int n,k,a[n],count=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++) {
		if(a[i]%2==1) {
			count=count+1;
		}
		if(count==k) {
			printf("%d ",a[i]);
			break;
		}
	}
	
	return 0;
}
 
