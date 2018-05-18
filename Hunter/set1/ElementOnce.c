#include <stdio.h>
int main(void) {
	int n,k;
	int i,j,a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			k++;
		}
		if(k==1)
		printf("%d",a[i]);
	}
	return 0;
}
