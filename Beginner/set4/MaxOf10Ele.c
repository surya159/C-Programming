#include <stdio.h>

int main(void) {
	// your code goes here
	int a[10],max;
	
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(int i=1;i<10;i++)
	{
		if(max<a[i])
			max=a[i];
	}
	printf("%d",max);
	return 0;
}
