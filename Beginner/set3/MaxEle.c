#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[n],max;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(int i=1;i<n;i++)
	{
		if(max<a[i])
			max=a[i];
	}
	printf("%d",max);
	return 0;
}
