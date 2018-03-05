#include <stdio.h>

int main(void) {
	// your code goes here
	int no,n,rev=0,rem;
	printf("Enter the no\n");
	scanf("%d",&no);
	n=no;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(no==rev)
		printf("Yes,It is a palindrome");
	else
		printf("No, it is not a palindrome");
	return 0;
}
