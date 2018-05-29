#include <stdio.h>

int main(void) {
	int n,k,a[n],t,count=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i]>a[j]) {
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
	printf("%d ",a[k-1]);
	
	return 0;
}
 
