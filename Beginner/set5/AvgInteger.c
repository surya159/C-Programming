#include <stdio.h>
int main()
{
	int i,n,a[n],sum=0;
	int mean;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    sum+=a[i];
	}
	mean=sum/n;
	printf("%d",mean);
	return 0;
}
