#include <stdio.h>

int main(void) {
		int a[100],i,j,n,k,sum=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<k;j++)
	{
		sum=sum+a[j];
	}
	printf("%d",sum);
	return 0;
}
