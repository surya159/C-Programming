#include <stdio.h>

int main(void) {
	// your code goes here
int num;
	printf("Enter the value\n");
	scanf("%d",&num);
	if((num%4)==0)
	{
		printf("Leap year\n");
	}
	else
	{
		printf("Not a leap year\n");
	}
	return 0;
}
