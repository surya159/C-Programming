#include <stdio.h>

int main(void) {
	
	int a[10],maxi;
	
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	maxi=a[0];
	for(int i=1;i<10;i++)
	{
		if(maxi<a[i])
			maxi=a[i];
	}
	printf("%d",maxi);
	return 0;
}
