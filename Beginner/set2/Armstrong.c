#include <stdio.h>

int main(void) {
	// your code goes here
	int no,n,res=0,rem;
	printf("Enter the no\n");
	scanf("%d",&no);
	n=no;
	while(n!=0)
	{
		rem=n%10;
		res+=rem*rem*rem;
		n/=10;
	}
	if(no==res)
		printf("Yes,It is an Armstrong");
	else
		printf("No, it is not an Armstrong");
	return 0;
}
