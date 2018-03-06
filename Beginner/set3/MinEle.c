#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[n],min;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(int i=1;i<n;i++)
	{
		if(min>a[i])
			min=a[i];
	}
	printf("%d",min);
	return 0;
}
