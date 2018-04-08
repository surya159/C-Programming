#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++) {
		printf("%d %d\n",a[i],i);
	}
	
	return 0;
}
