#include <stdio.h>

int main(void) {
	// your code goes here
	int a,d,n,tn,sum=0;
	printf("Enter the values of a,d,n\n");
	scanf("%d%d%d",&n,&a,&d);
	tn=a+(n-1)*d;
	sum=(n*(2*a+(n-1)*d))/2;
	for(int i=a;i<=tn;i=i+d)
	{
		if(i==tn)
			printf("%d",sum);
	}
	return 0;
}
