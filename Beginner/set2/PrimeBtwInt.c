#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,flag;
	printf("Enter the intervals\n");
	scanf("%d%d",&a,&b);
	while(a<b)
	{
	flag=0;
	for(int i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0 && a!=1)
		printf("%d ",a);
	a++;
	}
	return 0;
}
