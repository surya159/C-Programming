#include <stdio.h>

int main(void) {
	int n,k,a[n],t;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	if(n<k){
		return 0;
	}
	for(int i=0;i<n-1;i++) {
		if(a[i]>a[i+1]){
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
			
		}
	}
	printf("%d ",a[k-1]);
	return 0;
}
