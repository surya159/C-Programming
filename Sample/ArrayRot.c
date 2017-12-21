#include <stdio.h>
void rotate(int a[],int n,int k)
{
	int i,j,t;
	for(i=0;i<k;i++)
	{
		t=a[0];
		for(j=0;j<n-1;j++)
		{
			a[j]=a[j+1];
		}
		a[j]=t;
	}
}

int main(void) {
	// your code goes here
	int i,a[10],n,k;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number of positions to move\n");
	scanf("%d",&k);
	rotate(a,n,k);
		printf("Enter the array\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
