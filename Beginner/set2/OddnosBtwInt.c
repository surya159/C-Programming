#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b;
	printf("Enter the nos\n");
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		if(i%2==1)
			printf("%d ",i);
	}
	return 0;
}
